//Viet chuong trinh nhap vao 1 phan so. Rut gon phan so do va xuat kq

#include <iostream>
using namespace std;
class PhanSo {
private:
	int tu;
	int mau;
public:
	void Nhap();
	void Rutgon();
	void Xuat();
};

void PhanSo::Nhap() {
	cout << "Nhap tu so: ";
	cin >> tu;
	cout << "Nhap mau so: ";
	cin >> mau;
}

void PhanSo::Xuat() {
	cout << "\nTu so/mauso = " << tu<<"/"<< mau;
}

void PhanSo::Rutgon() {
	int a = abs(tu);
	int b = abs(mau);
	while (a * b != 0) {
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	tu = tu / (a + b);
	mau = mau / (a+b);
}

int main() {
	PhanSo ps;
	ps.Nhap();
	cout << "\nPhan so ban dau la: ";
	ps.Xuat();
	ps.Rutgon();
	cout << "\nPhan so sau khi rut gon la: ";
	ps.Xuat();

	return 1;
}