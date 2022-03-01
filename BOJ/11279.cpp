#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    priority_queue<int> nums;
    for(int i = 0; i < N; i++){
        int cmd;
        cin >> cmd;

        if(cmd == 0){
            if(nums.empty()){
                cout << 0 << "\n";
            }else{
                cout << nums.top() << "\n";
                nums.pop();
            }
        }else{
            nums.push(cmd);
        }
    }

    return 0;
}