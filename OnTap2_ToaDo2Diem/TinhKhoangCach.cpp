//Viet ctrinh nhap toa do 2 diem trong ko gian va tinh khoang cach, xuat kq
#include <iostream>
#include <cmath>
using namespace std;
typedef struct DIEM{
	float x;
	float y;
	float z;
};

void Nhap(DIEM& a) {
	cout << "Nhap toa do x: ";
	cin >> a.x;
	cout << "Nhap toa do y: ";
	cin >> a.y;
	cout << "Nhap toa do z: ";
	cin >> a.z;
};
float TinhKhoangCach(DIEM M, DIEM N) {
	float kc;
	kc = sqrt((N.x - M.x) * (N.x - M.x) + (N.y - M.y) * (N.y - M.y)+(N.z-M.z)* (N.z - M.z));
		return kc;

};
void Xuat(DIEM D) {
	cout << "x = " << D.x << endl;
	cout << "y = " << D.y << endl;
	cout << "z = " << D.z << endl;
};

int main() {
	DIEM A, B;
	Nhap(A);
	Nhap(B);
	Xuat(A);
	Xuat(B);
	cout << "Khoang cach 2 diem la: "<<TinhKhoangCach(A, B) << endl;

	return 1;
}