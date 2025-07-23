#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int alpha[26] = {0}; // a~z 카운트용 배열

    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        alpha[name[0] - 'a']++; // 첫 글자 알파벳의 개수 증가
    }

    bool found = false;

    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] >= 5)
        {
            cout << (char)(i + 'a');
            found = true;
        }
    }

    if (!found)
    {
        cout << "PREDAJA";
    }

    cout << '\n';

    return 0;
}