#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int root = (int) sqrt(n);
    if (root*root == n) cout << "YES";
    else cout << "NO";
    return 0;
}