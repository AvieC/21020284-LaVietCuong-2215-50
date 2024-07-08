#include <iostream>
using namespace std;

bool isTriang(float a, float b, float c) {
    return (a < (b + c)) && (c < (b + a)) && (b < (a + c)) && a > 0 && b > 0 && c > 0;
}

bool isVg(float a, float b, float c) {
    return (a*a + b*b == c*c);
}

int main() {
    float a, b, c;
    cin >> a >> b >> c;
    
    if (!isTriang(a, b, c)) cout << "Invalid";

    else {
        cout << a + b + c << endl;
        if (a == b && b == c) cout << "deu";
        else if (a == b || b == c || c == a) cout << "can";
        else if (isVg(a, b, c) || isVg(b, c, a) || isVg(c, a, b)) cout << "vuong";
        else cout << "thuong";
    }
    return 0;
}