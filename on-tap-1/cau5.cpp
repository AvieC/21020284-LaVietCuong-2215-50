#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
    float a, b, c;
    cin >> a >> b >> c;
    float del = b*b - 4*a*c;
    float x1, x2;
    
    //nghiem kep
    if (del == 0) {
        x1 = (b*(-1) - sqrt(del))/(a*2);
        cout << setprecision(2) << fixed << x1;
    }
    
    //nghiem thuc
    else if (del > 0) {
    x1 = (b*(-1) - sqrt(del)) / (a*2);
    x2 = (b*(-1) + sqrt(del)) / (a*2);
    cout << setprecision(2) << fixed << x1 << endl << x2;
    } else {
        //nghiem ao
        del *= -1;
        float x = b*(-1) / (2*a);
        x1 = - sqrt(del) / (a*2);
        x2 = sqrt(del) / (a*2);
        cout << setprecision(2) << fixed << x << ' ' << x1
            << endl << x << ' ' << x2;

    }
    return 0;
}