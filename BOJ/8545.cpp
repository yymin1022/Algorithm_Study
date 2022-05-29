#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    string input;
    cin >> input;

    reverse(input.begin(), input.end());

    cout << input << "\n";

    return 0;
}
