#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    
    int N;
    cin >> N;

    for(int i = 1; i < N; i++){
        for(int j = 0; j < i; j++){
            cout << "*";
        }

        cout << "\n";
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N - i; j++){
            cout << "*";
        }

        cout << "\n";
    }

    return 0;
}