#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    vector<long long> nums(N);
    for(int i = 0; i < N; i++){
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    int cnt = 0;
    for(int i = 0; i < N; i++){
        long long target = nums[i];

        vector<long long> temp = nums;
        temp.erase(temp.begin() + i);

        int fromL = 0;
        int fromR = N - 2;
        while(fromL < fromR){
            long long sum = temp[fromL] + temp[fromR];

            if(sum > target){
                fromR--;
            }else if(sum < target){
                fromL++;
            }else{
                cnt++;
                break;
            }
        }
    }

    cout << cnt << "\n";

    return 0;
}