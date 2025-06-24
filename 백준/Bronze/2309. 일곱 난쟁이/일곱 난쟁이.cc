#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num[9];
    int sum = 0;

    for (int i = 0; i < 9; i++)
    {
        cin >> num[i];
        sum += num[i];
    }

    sum = sum - 100;

    bool check = false;
    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (num[i] + num[j] == sum)
            {
                check = true;
                num[i] = 0;
                num[j] = 0;

                break;
            }
        }

        if (check)
            break;
    }

    sort(num, num + 9);

    for (int i = 2; i < 9; i++)
    {
        cout << num[i] << endl;
    }

    return 0;
}