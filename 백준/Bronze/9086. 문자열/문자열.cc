#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        string s;
        cin >> s;
        cout << s[0] << s[s.size() - 1] << '\n';
    }

    return 0;
}