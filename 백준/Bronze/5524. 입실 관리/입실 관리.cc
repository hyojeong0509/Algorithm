#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num = 0;
    string s;

    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cin >> s;

        for (char &c : s)
        {
            c = tolower(c);
        }

        cout << s << endl;
    }

    return 0;
}