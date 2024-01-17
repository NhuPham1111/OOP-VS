//Viet ctrinh nhap vao toa do 2 diem trong ko gian , tnh khoang cach giua chung va xuat kq;
#include <iostream>
using namespace std;

class CDiem {
private:
	int x;
	int y;
	int z;

public: 
	void Nhap();
	void Xuat();
	float TinhKC(CDiem);
};

void CDiem::Nhap() {
	cout << "\nx: ";
	cin >> x;
	cout << "y: ";
	cin >> y;
	cout << "z: ";
	cin >> z;
}

void CDiem::Xuat() {
	cout << "\nx: " << x;
	cout << "y: " << y;
	cout << "z: " << z;

}

float CDiem::TinhKC(CDiem P) {
	return sqrt((x - P.x) * (x - P.x) + (y - P.y) * (y - P.y)+ (z-P.z)*(z - P.z));

}
int main() {
	CDiem A, B;
	cout << "\nNhap toa do diem A: ";
	A.Nhap();
	cout << "\nNhap toa do diem B: ";
	B.Nhap();

	cout << "Gia tri nhap vao: ";
	A.Xuat();
	B.Xuat();

	float kc = B.TinhKC (A);
	cout << "\nKhoang cach 2 diem AB la: " << kc;

	return 1;
}