#include  <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N, S;

    while(cin >> N >> S){
        cout << S / (N + 1) << "\n";
    }

    return 0;
}