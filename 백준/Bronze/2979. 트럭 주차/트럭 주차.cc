#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;
    int s, e;

    int time[100] = {0};

    cin >> a >> b >> c;

    for (int i = 0; i < 3; i++)
    {
        cin >> s >> e;
        for (int j = s; j < e; j++)
        {
            time[j]++;
        }
    }

    int total = 0;

    for (int i = 1; i <= 100; i++)
    {
        if (time[i] == 1)
            total += a;
        else if (time[i] == 2)
            total += b * 2;
        else if (time[i] == 3)
            total += c * 3;
    }

    cout << total << endl;

    return 0;
}