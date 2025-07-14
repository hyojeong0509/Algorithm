#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main()
{
    int count = 0;

    cin >> count;

    for (int i = 0; i < count; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << "Case #" << i + 1 << ": " << (a + b) << endl;
    }
    
    return 0;
}