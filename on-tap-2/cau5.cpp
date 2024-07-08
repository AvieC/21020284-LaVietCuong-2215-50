#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int tmp;
    float max = 0;
    for(int i = 0; i < 5; ++i) {
    cin >> tmp;
    max += (float) tmp/5;
    }
    cout << setprecision(2) << fixed << max;
    return 0;
}