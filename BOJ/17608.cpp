#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    stack<int> stick;
    for(int i = 0; i < N; i++){
        int input;
        cin >> input;
        stick.push(input);
    }

    int ans = 0;
    int maxH = 0;
    while(!stick.empty()){
        int cur = stick.top();
        stick.pop();

        if(maxH < cur){
            ans++;
            maxH = cur;
        }
    }

    cout << ans << "\n";

    return 0;
}