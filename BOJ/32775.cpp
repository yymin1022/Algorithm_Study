#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);

    int A, B;
    cin >> A >> B;

    cout << (A > B ?  "flight" : "high speed rail") << "\n";

    return 0;
}