#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    if(to_string(N).find('7') == string::npos){
        cout << 0 + (N % 7 != 0 ? 0 : 1) << "\n";
    }else{
        cout << 2 + (N % 7 != 0 ? 0 : 1) << "\n";
    }

    return 0;
}