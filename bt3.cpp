#include <iostream>
using namespace std;

class PhanSo {
public:
    int tu, mau;

    void nhap() {
        cin >> tu >> mau;
    }

    PhanSo cong(PhanSo b) {
        return {tu*b.mau + b.tu*mau, mau*b.mau};
    }

    PhanSo tru(PhanSo b) {
        return {tu*b.mau - b.tu*mau, mau*b.mau};
    }

    PhanSo nhan(PhanSo b) {
        return {tu*b.tu, mau*b.mau};
    }

    PhanSo chia(PhanSo b) {
        return {tu*b.mau, mau*b.tu};
    }

    void xuat() {
        cout << tu << "/" << mau << endl;
    }
};

int main() {
    PhanSo a, b;
    a.nhap();
    b.nhap();

    a.cong(b).xuat();
    a.tru(b).xuat();
    a.nhan(b).xuat();
    a.chia(b).xuat();
}
