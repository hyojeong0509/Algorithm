#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 2; i <= 9; ++i) {
        for (int j = 1; j <= 9; ++j) {
            int A = i, B = j, C = i * j;
            if (A == N || B == N || C == N) {
                cout << 1 << '\n';
                return 0;
            }
        }
    }

    cout << 0 << '\n';
    return 0;
}