#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);

    int N, M;
    cin >> N >> M;

    cout << ((N * 100 >= M) ? "Yes" : "No") << "\n";

    return 0;
}