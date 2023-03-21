#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    while(N--){
        double A, B;
        cin >> A >> B;

        cout << fixed;
        cout.precision(1);
        cout << abs(A - B) << "\n";
    }

    return 0;
}