#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);

    int T;
    cin >> T;

    while(T--){
        int N;
        cin >> N;

        for(int i = 0; i < N / 5; i++){
            cout << "++++" << " ";
        }

        for(int i = 0; i < N % 5; i++){
            cout << "|";
        }

        cout << "\n";
    }

    return 0;
}