#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    string r = s;
    reverse(r.begin(), r.end());

    if (s == r)
        cout << 1 << endl;
    else
        cout << 0 << endl;

    return 0;
}