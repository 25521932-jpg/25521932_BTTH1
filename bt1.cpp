#include <iostream>
using namespace std;

class PhanSo {
private:
    int tu, mau;

    int UCLN(int a, int b) {
        while (b != 0) {
            int r = a % b;
            a = b;
            b = r;
        }
        return a;
    }

public:
    void nhap() {
        cin >> tu >> mau;
    }

    void rutGon() {
        int u = UCLN(tu, mau);
        tu /= u;
        mau /= u;
    }

    void xuat() {
        cout << tu << "/" << mau;
    }
};

int main() {
    PhanSo ps;
    ps.nhap();
    ps.rutGon();
    ps.xuat();
}
