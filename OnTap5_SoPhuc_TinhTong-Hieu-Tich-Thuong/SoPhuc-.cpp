// Viet ham nhập vào 2 số phức, tính tổng hiệu tích thương và xuất kq

#include <iostream>
#include <string>
using namespace std;
typedef struct SOPHUC {
	float thuc;
	float ao;
};

void Nhap(SOPHUC& a) {
	cout << "Nhap phan thuc: ";
	cin >> a.thuc;
	cout << "Nhap phan ao: ";
	cin >> a.ao;

}

SOPHUC Tong(SOPHUC a, SOPHUC b) {
	SOPHUC SP;
	SP.thuc = a.thuc + b.thuc;
	SP.ao = a.ao + b.ao;
	return SP;
}

SOPHUC HIEU(SOPHUC a, SOPHUC b) {
	SOPHUC SP;
	SP.thuc = a.thuc - b.thuc;
	SP.ao = a.ao - b.ao;
	return SP;
}

SOPHUC Tich(SOPHUC a, SOPHUC b) {
	SOPHUC SP;
	SP.thuc = a.thuc * b.thuc - a.ao * b.ao;
	SP.ao = a.thuc * b.ao + a.ao * b.thuc;
	return SP;
}


void  Xuat(SOPHUC p) {
	cout << "So phuc la: " << p.thuc <<" + "<<p.ao <<"i"<< endl;
}


int main() {
	SOPHUC sp1, sp2, kq;
	cout << "Nhap so thuc thu nhat: \n";
	Nhap(sp1);
	cout << "Nhap so thuc thu hai: \n";
	Nhap(sp2);

	Tong(sp1, sp2);
	HIEU(sp1, sp2);
	Tich(sp1, sp2);
	cout << "Tong 2 so phuc la: ";
	Xuat(Tong(sp1, sp2));
	cout << "Hieu 2 so phuc la: ";
	Xuat(HIEU(sp1, sp2));
	cout << "Tich  2 so phuc la: ";
	Xuat(Tich(sp1, sp2));

	return 0;
}