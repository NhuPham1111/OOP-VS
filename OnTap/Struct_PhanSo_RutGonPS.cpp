//Viet ctrinh nhap vao 1 phan so. Cho biet phan so am hay duong hay =0

#include <iostream>
#include <string>
using namespace std;
struct PHANSO {
	int tu;
	int mau;
};
typedef struct PHANSO PS;

void Nhap(PHANSO &x) {
	cout << "Nhap tu so : ";
	cin >> x.tu;
	cout << "Nhap mau so: ";
	cin >> x.mau;
};
void Xuat(PHANSO x) {
	cout << "\n Tu:" << x.tu;
	cout << "\n Mau:" << x.mau << endl;
};
void RutGon(PHANSO &x) {
	int a = abs(x.tu);
	int b = abs(x.mau);
	while (a*b != 0) {
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	x.tu = x.tu / (a + b);
	x.mau = x.mau / (a + b);
}

void XetdauPS(PHANSO x) {
	if (x.tu * x.mau > 0)
		cout << "Phan so duong" << endl;
	else if (x.tu * x.mau < 0)
		cout << "Phan so am" << endl;
	else
		cout << "Phan so = 0";
}

int main() {
	PHANSO ps;
	Nhap(ps);
	RutGon(ps);
	Xuat(ps);
	XetdauPS(ps);
	return 1;
}
