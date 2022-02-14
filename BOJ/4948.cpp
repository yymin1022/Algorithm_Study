#include <bits/stdc++.h>

using namespace std;

bool nums[250001];
int sum[250001];

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    nums[0] = nums[1] = true;
    for(int i = 2; i < 250000; i++){
        if(nums[i]){
            continue;
        }
        for(int j = i * 2; j < 250000; j += i){
            nums[j] = true;
        }
    }

    for(int i = 2; i < 250000; i++){
        if(!nums[i]){
            sum[i]++;
        }
        sum[i] += sum[i - 1];
    }

    int N;
    cin >> N;
    while(N){
        cout << sum[N * 2] - sum[N] << "\n";
        cin >> N;
    }

    return 0;
}