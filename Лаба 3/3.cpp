#include <iostream>;
#include <string>;
using namespace std;
int l3() {
	string s, s1,s2,alf = "0123456789abcdef";
	int o, ch1, ch2,sp,k=0;
	setlocale(LC_ALL, "Russian");
	cout << "Система счисления: ";
	cin >> o;
	if (o < 2 or o > 16) cout << "Система счисления не по ТЗ" << endl;
	else {
		cout << "1 число в десятичной системе счисления: ";
		cin >> ch1;
		cout << "2 число в десятичной системе счисления: ";
		cin >> ch2;
		if (ch1 == 0) s1 = "0";
		if (ch2 == 0) s2 = "0";
		int x1 = ch1;
		int x2 = ch2;
		while (x1 > 0 and x2 > 0) {
			int i1 = x1 % o;
			int i2 = x2 % o;
			char d1 = alf[i1];
			char d2 = alf[i2];
			s1 = d1 + s1;
			s2 = d2 + s2;
			sp = alf.find(d1) + alf.find(d2)+k;
			if (sp > o) {
				k = 1;
				sp = sp - o;
			}
			else k = 0;
			s = alf[sp] + s;
			x1 /= o;
			x2 /= o;
		}
		while (x1 > 0 or x2 > 0) {
			if (x1 > 0) {
				int i1 = x1 % o;
				char d1 = alf[i1];
				s1 = d1 + s1;
				char d1k = alf.find(d1) + k;
				k = 0;
				s = alf[d1k] + s;
				x1 /= o;
			}
			if (x2 > 0) {
				int i2 = x2 % o;
				char d2 = alf[i2];
				s2 = d2 + s2;
				char d2k = alf.find(d2) + k;
				k = 0;
				s = alf[d2k] + s;
				x2 /= 0;
			}
		}
		if (k==1) s = to_string(k) + s;
		cout << ch1 << "(10)+" << ch2 << "(10)=" << s1 << "(" << o << ")+" << s2 << "(" << o << ")=" << s << "(" << o << ")" << endl;
	}
	return 0;
}