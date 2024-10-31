#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N, K;
    cin >> N >> K;

    while(K--){
        int G;
        cin >> G;

        G *= 100;
        G /= N;
        if(G <= 4){
            cout << 1 << " ";
        }else if(G <= 11){
            cout << 2 << " ";
        }else if(G <= 23){
            cout << 3 << " ";
        }else if(G <= 40){
            cout << 4 << " ";
        }else if(G <= 60){
            cout << 5 << " ";
        }else if(G <= 77){
            cout << 6 << " ";
        }else if(G <= 89){
            cout << 7 << " ";
        }else if(G <= 96){
            cout << 8 << " ";
        }else{
            cout << 9 << " ";
        }
    }

    return 0;
}