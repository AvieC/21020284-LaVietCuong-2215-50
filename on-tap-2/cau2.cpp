#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, tmp;
    cin >> n;
    vector<int> a;
    for(int i = 0; i < n; ++i) {
        cin >> tmp;
        a.push_back(tmp);
    }
    
    sort(a.begin(), a.end());
    int min_dif = a[1] - a[0];
    for(int i = 2; i < n; ++i) {
        if ((a[i]-a[i-1]) < min_dif) min_dif = a[i] - a[i-1];
    }
    cout << min_dif;
    return 0;
}