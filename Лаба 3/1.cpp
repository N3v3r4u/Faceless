#include <iostream>;
#include <string>;
using namespace std;
int l1() {
	int ch, o;
	string d, s, alf = "0123456789abcdef";
	setlocale(LC_ALL, "Russian");
	cout << "������� ���������: ";
	cin >> o;
	cout << "����� � ���������� ������� ���������: ";
	cin >> ch;
	if (o < 2 or o > 16) s = "break";
	else if (ch == 0) s = "0"; // ��������� ������, ����� ch ����� 0
	else {
		int x = ch;
		while (x > 0) {
			int i = x % o;
			d = to_string(alf[i]-48);
			s = d + s;
			x /= o;
		}
	}
	if (s == "break") cout << "������� ��������� �� �� ��" << endl;
	else cout << "��������� ������ ���������: " << ch << "(10)=" << s << "(" << o << ")" << endl;
	return 0;
}