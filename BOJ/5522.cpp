#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int score = 0;
    for(int i = 0; i < 5; i++){
        int input;
        cin >> input;
        score += input;
    }

    cout << score << "\n";

    return 0;
}