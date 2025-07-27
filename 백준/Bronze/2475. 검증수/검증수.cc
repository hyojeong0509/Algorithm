#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c, d, e;
    int sum;

    cin >> a >> b >> c >> d >> e;

    sum = a * a + b * b + c * c + d * d + e * e;

    cout << sum % 10 << endl;
}