#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);

    string S;
    cin >> S;

    vector<int> cnt(26, 0);
    for(int i = 0; i < S.size(); i++){
        cnt[(int)S[i] - 'a']++;
    }

    for(int i = 0; i < 26; i++){
        cout << cnt[i] << " ";
    }

    return 0;
}