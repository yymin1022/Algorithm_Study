#include <bits/stdc++.h>

using namespace std;

bool isVirus[101];
int computer[101][101];
int cnt, N, M;

void dfs(int idx){
    if(idx == N){
        return;
    }

    for(int i = 0; i < N; i++){
        if(computer[idx][i] && !isVirus[i]){
            cnt++;
            isVirus[i] = true;
            dfs(i);
        }
    }
}

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N >> M;

    for(int i = 0; i < M; i++){
        int a, b;
        cin >> a >> b;
        computer[a - 1][b - 1] = 1;
        computer[b - 1][a - 1] = 1;
    }

    isVirus[0] = true;
    dfs(0);

    cout << cnt << "\n";

    return 0;
}