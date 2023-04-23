#include  <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    long long A, B;
    cin >> A >> B;

    long long tmp;
    long long gcd = A;
    long long tmpB = B;
    while(tmpB){
        tmp = gcd % tmpB;
        gcd = tmpB;
        tmpB = tmp;
    }

    cout << A * B / gcd << "\n";

    return 0;
}