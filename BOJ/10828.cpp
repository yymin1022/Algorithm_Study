#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);

    int num;
    cin >> num;

    stack<int> numStack;
    for(int i = 0; i < num; i++){
        string cmd;
        cin >> cmd;

        if(cmd == "push"){
            int input;
            cin >> input;

            numStack.push(input);
        }else if(cmd == "pop"){
            if(!numStack.empty()){
                cout << numStack.top() << "\n";
                numStack.pop();
            }else{
                cout << -1 << "\n";
            }
        }else if(cmd == "size"){
            cout << numStack.size() << "\n";
        }else if(cmd == "empty"){
            cout << (int)numStack.empty() << "\n";
        }else if(cmd == "top"){
            if(!numStack.empty()){
                cout << numStack.top() << "\n";
            }else{
                cout << -1 << "\n";
            }
        }
    }

    return 0;
}