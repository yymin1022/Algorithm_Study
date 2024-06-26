#include  <bits/stdc++.h>

using namespace std;

int dp[1000001];

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

    dp[1] = 1;
	for(int i = 2; i <= N; i++){
		dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000007;
	}

	cout << dp[N] << "\n";

    return 0;
}
