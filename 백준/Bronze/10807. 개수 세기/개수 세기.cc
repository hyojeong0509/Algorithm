#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main()
{
    int count = 0;
    int num[100] = {0};
    int f;
    int sum = 0;

    cin >> count;

    for (int i = 0; i < count; i++)
    {
        cin >> num[i];
    }

    cin >> f;

    for (int i = 0; i < count; i++)
    {
        if (num[i] == f)
        {
            sum++;
        }
    }

    cout << sum << endl;

    return 0;
}