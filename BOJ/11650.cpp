#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    vector<pair<int, int>> person;
    for(int i = 0; i < N; i++){
        int x, y;
        cin >> x >> y;

        person.push_back(make_pair(x, y));
    }

    sort(person.begin(), person.end());

    for(int i = 0; i < N; i++){
        cout << person[i].first << " " << person[i].second << "\n";
    }
    
    return 0;
}