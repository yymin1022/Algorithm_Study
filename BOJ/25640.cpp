#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    
    int N;
    string MBTI;
    cin >> MBTI >> N;

    int ans = 0;
    for(int i = 0; i < N; i++){
        string input;
        cin >> input;

        if(input == MBTI){
            ans++;
        }
    }

    cout << ans << "\n";

    return 0;
}