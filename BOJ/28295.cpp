#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);

    int N = 0;
    for(int i = 0; i < 10; i++){
        int input;
        cin >> input;

        if(input == 1){
            N++;
        }else if(input == 2){
            N += 2;
        }else if(input == 3){
            N--;
        }

        if(N < 0){
            N += 4;
        }else if(N > 3){
            N -= 4;
        }
    }

    char dir[4] = {'N', 'E', 'S', 'W'};
    cout << dir[N] << "\n";

    return 0;
}