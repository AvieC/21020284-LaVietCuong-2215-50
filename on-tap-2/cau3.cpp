#include <iostream>

using namespace std;

bool isPrime(int n) {
    if (n%2 ==0 || n%3 == 0) return false;
    int i = 5;
    while (i*i < n+1) {
        if (n%i == 0 || n%(i+2) == 0) return false;
        i += 6;
    }
    return true;
}
int main()  {
    int n;
    cin >> n;
    
    if (n < 2) cout << "no";
    else if (n == 2 || n == 3) cout << "yes";
    else if (isPrime(n)) cout << "yes";
    else cout << "no";
    return 0;
}