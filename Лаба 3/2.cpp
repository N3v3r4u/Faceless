#include <iostream>;
#include <string>;
using namespace std;
int l2() {
	int ch, o, d = 0,k = 0;
	string s, n, alf = "0123456789abcdef";
	setlocale(LC_ALL, "Russian");
	cout << "Система счисления: ";
	cin >> o;
	if (o < 2 or o > 16) cout << "Система счисления не по ТЗ" << endl;
	else {
		cout << "Введите число в системе счисления с основанием " << o << ": ";
		cin >> n;
		for (char c : n) {
			int i = alf.find(c);
			if (i > o) {
				cout << "Некорректный символ '" << c << "' для основания " << o << endl;
				k += 1;
			}
			else {
				d = d * o + i;
			}
		}
		if (k == 0) cout << "Десятичное значение: " << d << endl;
	}
	return 0;
}