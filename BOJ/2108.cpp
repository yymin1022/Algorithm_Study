#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;
    
    int maxValue = -4001;
    int minValue = 4001;
    double sum = 0;
    vector<int> numCount(8001, 0);
    vector<int> nums;

    for(int i = 0; i < N; i++){
        int input;
        cin >> input;

        numCount[input + 4000]++;
        nums.push_back(input);
        sum += input;

        if(input > maxValue){
            maxValue = input;
        }
        if(input < minValue){
            minValue = input;
        }
    }

    int temp = 0;
    int maxCount = *max_element(numCount.begin(), numCount.end());
    int maxCountNum;
    for(int i = 0; i < 8001; i++){
        if(temp == 2){
            break;
        }
        if(numCount[i] == maxCount){
            maxCountNum = i;
            temp++;
        }
    }

    maxCountNum -= 4000;

    sort(nums.begin(), nums.end());

    cout << round((double)(sum / N)) << "\n";
    cout << nums[N / 2] << "\n";
    cout << maxCountNum << "\n";
    cout << maxValue - minValue << "\n";
    
    return 0;
}