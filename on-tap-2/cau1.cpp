#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> a;
    int tmp;
    cin >> tmp;
    a.push_back(tmp);
    do {
        cin >> tmp;
        if (a.back() != tmp) {
            a.push_back(tmp);
        }
    } while (tmp >= 0);
    
    for (size_t i = 0; i < a.size(); ++i) {
        cout << a[i] << " ";
    }
    return 0;
}
