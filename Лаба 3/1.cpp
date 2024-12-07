#include <iostream>;
#include <string>;
using namespace std;
int l1() {
	int ch, o;
	string d, s, alf = "0123456789abcdef";
	setlocale(LC_ALL, "Russian");
	cout << "Система счисления: ";
	cin >> o;
	cout << "Число в десятичной системе счисления: ";
	cin >> ch;
	if (o < 2 or o > 16) s = "break";
	else if (ch == 0) s = "0"; // Обработка случая, когда ch равно 0
	else {
		int x = ch;
		while (x > 0) {
			int i = x % o;
			d = to_string(alf[i]-48);
			s = d + s;
			x /= o;
		}
	}
	if (s == "break") cout << "Система счисления не по ТЗ" << endl;
	else cout << "Результат работы программы: " << ch << "(10)=" << s << "(" << o << ")" << endl;
	return 0;
}