#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int arr[6] = {26, 14, 10, 6, 6, 4};
    int ansA = 0;
    for(int i = 0; i < 6; i++){
        int input;
        cin >> input;
        ansA += input * arr[i];
    }

    int ansB = 3;
    for(int i = 0; i < 6; i++){
        int input;
        cin >> input;
        ansB += input * arr[i];
    }

    cout << (ansA > ansB ? "cocjr0208" : "ekwoo") << "\n";

    return 0;
}
