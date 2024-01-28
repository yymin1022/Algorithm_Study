#include  <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N, M;
    cin >> N >> M;

    int ans = 0;
    for(int i = 0; i < N; i++){
        string input;
        cin >> input;

        int tmp = 0;
        for(int j = 0; j < input.size(); j++){
            if(input[j] == 'O'){
                tmp++;
            }
        }

        if(tmp > M / 2){
            ans++;
        }
    }

    cout << ans << "\n";

    return 0;

}