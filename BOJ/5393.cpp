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

        int ans = N / 2;
        if(N % 2 != 0){
            ans++;
        }

        ans += N / 3;
        if(N % 6 != 0 && N % 6 != 4){
            ans++;
        }

        cout << ans << "\n";
    }

    return 0;
}
