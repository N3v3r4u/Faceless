#include <iostream>;
#include <string>;
using namespace std;
int l2() {
	int ch, o, d = 0,k = 0;
	string s, n, alf = "0123456789abcdef";
	setlocale(LC_ALL, "Russian");
	cout << "������� ���������: ";
	cin >> o;
	if (o < 2 or o > 16) cout << "������� ��������� �� �� ��" << endl;
	else {
		cout << "������� ����� � ������� ��������� � ���������� " << o << ": ";
		cin >> n;
		for (char c : n) {
			int i = alf.find(c);
			if (i > o) {
				cout << "������������ ������ '" << c << "' ��� ��������� " << o << endl;
				k += 1;
			}
			else {
				d = d * o + i;
			}
		}
		if (k == 0) cout << "���������� ��������: " << d << endl;
	}
	return 0;
}