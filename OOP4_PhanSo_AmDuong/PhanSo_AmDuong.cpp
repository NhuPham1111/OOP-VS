//Viet ctrinh nhap vao 1 phan so.Cho biet phan so am hay duong hay = 0

#include <iostream>
using namespace std;
class CPhanSo {
private:
	int tu;
	int mau;
public:
	void Nhap();
	void Xuat();
	int XetDauPhanSo();

};

void CPhanSo::Nhap() {
	cout << "\nNhap tu so: ";
	cin >> tu;
	cout << "Nhap mau so: ";
	cin >> mau;

}

void CPhanSo::Xuat() {
	cout << tu << "/" << mau;
}

int CPhanSo::XetDauPhanSo() {
	if (tu * mau > 0) {
		cout << "\nPhan so duong";
		return 1;
	}
	else if (tu * mau < 0) {
		cout << "\nPhan so am";
		return -1;
	}
	else {
		cout << "\nPhan so =0";
		return 0;
	}
}

int main() {
	CPhanSo PS;
	cout << "Nhap phan so: ";
	PS.Nhap();
	PS.Xuat();
	PS.XetDauPhanSo();

}