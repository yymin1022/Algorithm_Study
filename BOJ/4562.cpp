#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        int X, Y;
        cin >> X >> Y;

        cout << (X < Y ? "NO BRAINS" : "MMM BRAINS") << "\n";
    }

    return 0;
}