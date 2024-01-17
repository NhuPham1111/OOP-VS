//Viet ctrinh nhap 2 phan so, tinh tong hieu tich thuong 2 phan so va xuat ket qua

#include <iostream>
#include <string>
using namespace std;
struct PHANSO {
	int tu;
	int mau;
};
typedef struct PHANSO PS;

void NhapPS(PHANSO& x) {
	cout << "Nhap tu so : ";
	cin >> x.tu;
	cout << "Nhap mau so: ";
	cin >> x.mau;
};
void XuatPS(PHANSO x) {
	cout << "\n Tu:" << x.tu;
	cout << "\n Mau:" << x.mau << endl;
};
void RutGon(PHANSO& x) {
	int a = abs(x.tu);
	int b = abs(x.mau);
	while (a * b != 0) {
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	x.tu = x.tu / (a + b);
	x.mau = x.mau / (a + b);
}

PHANSO Tong2PS(PHANSO a, PHANSO b){
	PHANSO Tong;
	Tong.tu = a.tu * b.mau + b.tu * a.mau;
	Tong.mau = a.mau * b.mau;
	return Tong;
}

PHANSO Hieu2PS(PHANSO a, PHANSO b) {
	PHANSO Hieu;
	Hieu.tu = a.tu * b.mau - b.tu * a.mau;
	Hieu.mau = a.mau * b.mau;

	return Hieu;
}

PHANSO Tich2PS(PHANSO a, PHANSO b) {
	PHANSO Tich;
	Tich.tu = a.tu * b.tu;
	Tich.mau = a.mau * b.mau;	
	return Tich;
}

PHANSO Thuong2PS(PHANSO a, PHANSO b) {
	PHANSO Thuong;
	Thuong.tu = a.tu * b.mau;
	Thuong.mau = a.mau * b.tu;	
	return Thuong ;
}

void xuat(PHANSO ps)
{
	cout << ps.tu << "/" << ps.mau << endl;
}

int main() {
	PHANSO ps1, ps2,ps;
	cout << "Nhap phan so thu nhat" << endl;
	NhapPS(ps1);
	RutGon(ps1);

	cout << "Nhap phan so thu hai" << endl;
	NhapPS(ps2);
	RutGon(ps2);
		
	cout << "Tong 2 phan so la: ";
	xuat(Tong2PS(ps1, ps2));
	cout << "Hieu 2 phan so la: ";
	xuat(Hieu2PS(ps1, ps2));
	cout << "Tich 2 phan so la: ";
	xuat(Tich2PS(ps1, ps2));
	cout << "Thuong 2 phan so la: ";
	xuat(Thuong2PS(ps1, ps2));

	return 0;
}


