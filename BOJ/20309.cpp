#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        int input;
        cin >> input;
        if(i % 2 == input % 2){
            cout << "NO" << "\n";
            return 0;
        }
    }

    cout << "YES" << "\n";

    return 0;
}