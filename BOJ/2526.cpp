#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, p;
    vector<int> history;

    cin >> n >> p;

    int num = n;
    while(count(history.begin(), history.end(), num) < 1){
        history.push_back(num);
        num *= n;
        num %= p;
    }

    cout << history.size() - (find(history.begin(), history.end(), num) - history.begin());

    return 0;
}