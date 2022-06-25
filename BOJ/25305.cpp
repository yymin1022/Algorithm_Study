#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N, K;
    cin >> N >> K;

    vector<int> score;
    for(int i = 0; i < N; i++){
        int x;
        cin >> x;
        score.push_back(x);
    }

    sort(score.begin(), score.end());

    cout << score[N - K] << "\n";

    return 0;
}