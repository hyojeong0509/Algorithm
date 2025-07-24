#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b;
    int sum;

    cin >> a >> b;

    sum = (a + b) * (a - b);
    cout << sum << endl;

    return 0;
}