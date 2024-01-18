#include  <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        string input;
        cin >> input;

        if(find(input.begin(), input.end(), 'S') != input.end()){
            cout << input << "\n";
            return 0;
        }
    }

    return 0;
}
