#include <iostream>
#include <bitset>
using namespace std;
int lV() {
    for (int i = 0; i < 64; ++i) {
        bitset<6> b(i);
        int e = b.count();
        int z = 6 - e;
        if (e > z) {
            cout << "����������: " << i << ", ��������: " << b << std::endl;
            cout << "����� ��� ����";
        }
    }
    return 0;
}