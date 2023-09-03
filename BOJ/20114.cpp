#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);

    int N, H, W;
    cin >> N >> H >> W;

    string ans;
    for(int i = 0; i < N; i++){
        ans.push_back('?');
    }
    for(int i = 0; i < H; i++){
        string input;
        cin >> input;

        for(int j = 0; j < N * W; j++){
            if(input[j] != '?'){
                ans[j / W] = input[j];
            }
        }
    }

    cout << ans << "\n";

    return 0;
}

// #include <bits/stdc++.h>

// using namespace std;

// int main(){
//     cin.tie(0);
//     cout.tie(0);
//     ios_base::sync_with_stdio(false);

//     int N, M, Q;
//     cin >> N >> M >> Q;

//     vector<int> arr[N];
//     for(int i = 0; i < N; i++){
//         for(int j = 0; j < M; j++){
//             int input;
//             cin >> input;
//             arr[i].push_back(input);
//         }
//     }

//     while(Q--){
//         int a, b, c, d;
//         cin >> a >> b >> c;

//         if(a == 0){
//             cin >> d;

//             arr[b][c] = d;
//         }else{
//             vector<int> tmp = arr[b];
//             arr[b] = arr[c];
//             arr[c] = tmp;
//         }
//     }

//     for(int i = 0; i < N; i++){
//         for(int j = 0; j < M; j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << "\n";
//     }

//     return 0;
// }
