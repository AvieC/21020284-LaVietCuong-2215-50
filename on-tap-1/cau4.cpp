#include <iostream>
#include <string>

using namespace std;

string numToStr(int a) {
    switch (a) {
        case 1: return "one";
        case 2: return "two";
        case 3: return "three";
        case 4: return "four";
        case 5: return "five";
        case 6: return "six";
        case 7: return "seven";
        case 8: return "eight";
        case 9: return "nine";
        case 10: return "ten";
        case 11: return "eleven";
        case 12: return "twelve";
        case 13: return "thirteen";
        case 14: return "fourteen";
        case 15: return "fifteen";
        case 16: return "sixteen";
        case 17: return "seventeen";
        case 18: return "eighteen";
        case 19: return "nineteen";
        case 20: return "twenty";
        case 30: return "thirty";
        case 40: return "forty";
        case 50: return "fifty";
        case 60: return "sixty";
        case 70: return "seventy";
        case 80: return "eighty";
        case 90: return "ninety";
        default: return "";
    }
}

string base3digit(int a) {
    
    string s3 ="";
    
    int hund = (int) a/100;
    s3 += numToStr(hund);
    if (a > 99) s3 += " hundred ";
    
    a %= 100;
    if (a > 19) {
        int a_donvi = a%10;
        int a_chuc = a - a_donvi;
    
        s3 += numToStr(a_chuc);
        s3 += "-";
        s3 += numToStr(a_donvi);
    } else {
        s3 += numToStr(a);
    }
    return s3;
}
int main() {
    string s = "";
    int a;
    cin >> a;
    if (a < 0) {
        a*= -1;
        s += "negative ";
    }
    
    int mil = (int) a/1000000;
    s += base3digit(mil);
    if (mil > 0) s += " million ";
    a -= mil*1000000;
    
    int thous = (int) a/1000;
    s += base3digit(thous);
    if (thous > 0) s += " thousand ";
    
    a %= 1000;
    s += base3digit(a);
    cout << s;
    return 0;
}