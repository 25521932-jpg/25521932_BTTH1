#include <iostream>
#include <string>
using namespace std;

class HocSinh {
public:
    string ten;
    float toan, van;

    void nhap() {
        cin.ignore();
        getline(cin, ten);
        cin >> toan >> van;
    }

    float tb() {
        return (toan + van)/2;
    }

    void xuat() {
        cout << ten << " " << tb();
    }
};

int main() {
    HocSinh hs;
    hs.nhap();
    hs.xuat();
}
