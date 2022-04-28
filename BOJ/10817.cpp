#include <bits/stdc++.h>

using namespace std;

int main(){

    vector<int> nums(3);

    for(int i = 0; i < 3; i++){

        cin >> nums[i];

    }

    

    sort(nums.begin(), nums.end());

    

    cout << nums[1] << "\n";

    

    return 0;

}
