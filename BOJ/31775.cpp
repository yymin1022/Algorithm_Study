#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    vector<string> S(3);
    cin >> S[0] >> S[1] >> S[2];

    sort(S.begin(), S.end());

    cout << (S[0][0] == 'k' && S[1][0] == 'l' && S[2][0] == 'p' ? "GLOBAL" : "PONIX") << "\n";

    return 0;
}
