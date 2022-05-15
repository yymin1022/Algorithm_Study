#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int beer, chicken, coke;
    cin >> chicken >> coke >> beer;

    int cnt = coke / 2 + beer;
    if(cnt >= chicken){
        cout << chicken << "\n";
    }else{
        cout << cnt << "\n";
    }

    return 0;
}