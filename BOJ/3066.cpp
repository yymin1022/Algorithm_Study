#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int T;
    cin >> T;

    while(T--){
        int N;
        cin >> N;

        vector<int> arr;
        for(int i = 0; i < N; i++){
            int input;
            cin >> input;

            if(arr.empty() || arr.back() < input){
                arr.push_back(input);
            }else{
                int idx = lower_bound(arr.begin(), arr.end(), input) - arr.begin();
                arr[idx] = input;
            }
        }

        cout << arr.size() << "\n";
    }

    return 0;
}