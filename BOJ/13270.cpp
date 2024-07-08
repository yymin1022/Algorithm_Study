#include <bits/stdc++.h>

using namespace std;

int dp_max[10001];
int dp_min[10001];

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    cout << (N + 1) / 2 << " ";
    cout << N * 2 / 3 << "\n";

    return 0;
}
