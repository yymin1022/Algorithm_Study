#include <bits/stdc++.h>

using namespace std;

bitset<33554432> bits;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N;
    while(cin >> N){
        if(!bits[N]){
            cout << N << " ";
        }

        bits[N] = 1;
    }

    return 0;
}