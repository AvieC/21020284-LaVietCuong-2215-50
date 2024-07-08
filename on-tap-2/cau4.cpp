#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    float tmp, min, max;
    cin >> tmp;
    min = tmp;
    max = tmp;
    for(int i = 1; i < n; ++i) {
        cin >> tmp;
        if (tmp > max) max = tmp;
        if (tmp < min) min = tmp;
    }
    cout << max << endl << min;
    return 0;
}