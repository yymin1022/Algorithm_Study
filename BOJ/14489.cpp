#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int A, B, C;
    cin >> A >> B >> C;

    if(A + B < C * 2){
        cout << A + B << "\n";
    }else{
        cout << A + B - C * 2 << "\n";
    }

    return 0;
}