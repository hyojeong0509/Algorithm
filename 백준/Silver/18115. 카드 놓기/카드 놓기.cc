#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> skills(N);         // 기술 순서
    for (int i = 0; i < N; i++) {
        cin >> skills[i];
    }

    deque<int> dq;                 // 손에 든 카드들

    for (int i = N - 1; i >= 0; i--) {
        int card = N - i;          // 현재 넣어야 할 카드 번호
        int skill = skills[i];     // 기술

        if (skill == 1) {
            dq.push_front(card);
        } else if (skill == 2) {
            int temp = dq.front(); dq.pop_front(); // 제일 앞 카드 잠깐 빼기
            dq.push_front(card);                   // 카드 넣기
            dq.push_front(temp);                   // 원래 카드 다시 넣기
        } else if (skill == 3) {
            dq.push_back(card);
        }
    }

    for (int x : dq) cout << x << " ";
    return 0;
}