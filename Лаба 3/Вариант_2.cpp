#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    for (int i = 33; i < 64; i++) {
        int x = i;
        string s = "";
        while (x > 0) {
           s = to_string(x % 2) + s;
           x /= 2;
        }
        char e = count(s.begin(), s.end(), '1');
        char z = 6 - e;
        if (e > z) {
            cout << "Десятичное: " << i << ", Двоичное: " << s << endl;
        }
    }
    return 0;
}