#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    int alpha[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        int num = s[i] - 'a';
        alpha[num]++;
    }

    for (int i = 0; i < 26; i++)
    {
        cout << alpha[i] << ' ';
    }

    return 0;
}