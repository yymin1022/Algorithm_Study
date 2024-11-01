#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    string N;
    cin >> N;

    while(N != "0"){
        int ans = N.size() + 1;
        for(int i = 0; i < N.size(); i++){
            if(N[i] == '0'){
                ans += 4;
            }else if(N[i] == '1'){
                ans += 2;
            }else{
                ans += 3;
            }
        }

        cout << ans << "\n";
        cin >> N;
    }

    return 0;
}