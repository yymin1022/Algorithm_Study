#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);

    int N;
    string S;
    cin >> N >> S;

    int cnt = 0;
    for(int i = 0; i < N; i++){
        if(S[i] == 'C'){
            cnt++;
        }
    }

    N -= cnt - 1;

    if(cnt % N){
        cout << cnt / N + 1 << "\n";
    }else{
        cout << cnt / N << "\n";
    }

    return 0;
}