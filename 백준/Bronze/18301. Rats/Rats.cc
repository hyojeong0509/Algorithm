#include <iostream>
#include <cmath> // floor 함수 사용
using namespace std;

int main() {
    int n1, n2, n12;
    cin >> n1 >> n2 >> n12;

    int N = (int)floor((n1 + 1) * (n2 + 1) / (double)(n12 + 1)) - 1;
    cout << N << "\n";

    return 0;
}