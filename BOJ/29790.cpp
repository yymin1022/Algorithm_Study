#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);

    int N, U, L;
    cin >> N >> U >> L;

    if(N >= 1000 && (U >= 8000 || L >= 260)){
        cout << "Very Good" << "\n";
    }else if(N >= 1000){
        cout << "Good" << "\n";
    }else{
        cout << "Bad" << "\n";
    }

    return 0;
}