#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < i; j++){
            cout << " ";
        }

        for(int j = 0; j < 2 * (N - i) - 1; j++){
            cout << "*";
        }

        cout << "\n";
    }

    return 0;
}