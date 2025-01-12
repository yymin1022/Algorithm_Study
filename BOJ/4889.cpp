#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int idx = 1;
    while(true){
        string input;
        cin >> input;

        if(input[0] == '-'){
            break;
        }

        int ans = 0;
        int cnt = 0;
        for(int i = 0; i < input.size(); i++){
            if(input[i] == '{'){
                cnt++;
            }else{
                cnt--;
                if(cnt < 0){
                    ans++;
                    cnt = 1;
                }
            }
        }
        ans += cnt/2;

        cout << idx << ". ";
        cout << ans << "\n";
        idx++;
    }

    return 0;
}