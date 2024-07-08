#include <bits/stdc++.h>

using namespace std;

void kangaroo(int x1, int v1, int x2, int v2) {
    if (x1 == x2) {
        cout << "YES";
    } else if (x1 < x2) {
        if (v1 < v2) {
            cout << "NO";
        } else {
            int pos1 = x1;
            int pos2 = x2;
            while (pos1 < pos2) {
                pos1 += v1;
                pos2 += v2;
            }
            if (pos1 == pos2) {
                cout << "YES";
            } else cout << "NO";
        }
    } else return kangaroo(x2, v2, x1, v1);
}

int main()
{
    
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    kangaroo(a, b, c, d);
    return 0;
}
