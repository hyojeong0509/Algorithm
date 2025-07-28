#include <iostream>
using namespace std;

int main() {
    int sleepTime, wakeTime;
    cin >> sleepTime >> wakeTime;

    int sleepDuration;
    if (sleepTime <= wakeTime) {
        sleepDuration = wakeTime - sleepTime;
    } else {
        sleepDuration = (24 - sleepTime) + wakeTime;
    }

    cout << sleepDuration << '\n';

    return 0;
}