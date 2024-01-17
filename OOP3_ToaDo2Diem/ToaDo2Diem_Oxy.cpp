//Viet chuong trinh nhap vao toa do 2 diem trong mp Oxy. Tinh khoang cach giua chung va xuat kq;

#include <iostream>
#include <cmath>
using namespace std;

class CDiem {
private:
	int x;
	int y;
public:
	void NhapDiem();
	void XuatDiem();
	float TinhKc(CDiem);
};

void CDiem::NhapDiem() {
	cout << "\nx: ";
	cin >> x;
	cout << "y: ";
	cin >> y;
}

void CDiem::XuatDiem() {
	cout << "\nx: " << x;
	cout << "\ny: " << y;
}

float CDiem::TinhKc(CDiem P) {
	return sqrt((x - P.x) * (x - P.x) + (y - P.y) * (y - P.y));
}

int main() {
	CDiem A,B;
	cout << "Nhap toa do diem A: ";
	A.NhapDiem();
	cout << "Nhap toa do diem B: ";
	B.NhapDiem();

	float kc = B.TinhKc(A);
	cout << "\nDiem A:";
	A.XuatDiem();
	cout << "\nDiem B:";
	B.XuatDiem();
	cout << "\n\nKhoang cach 2 diem A va B la: " << kc;

}