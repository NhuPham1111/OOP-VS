//Viết chương trình nhập vào tọa đọ tâm và bán kính đường tròn . Tính dện tích và chu vi đường tròn.

#include <iostream>
#include <cmath>
using namespace std;

struct DIEM {
	float x;
	float y;
};

typedef struct DIEM diem;

struct DUONGTRON {

	DIEM I;
	float R;

};

typedef struct DUONGTRON duongtron;

void NhapDiem(DIEM &p) {
	cout << "Nhap x: ";
	cin >> p.x;
	cout << "Nhap y: ";
	cin >> p.y;
}

void XuatDiem(DIEM &p) {
	cout << "\n x = " << p.x;
	cout << "\n y = " << p.y;
}


void NhapDuongTron(DUONGTRON &D) {
	cout << "Nhap tam duong tron: ";
	cout << "\nx: ";
	cin >> D.I.x;
	cout << "\ny: ";
	cin >> D.I.y;

	cout << "Nhap ban kinh duong tron: ";
	cin >> D.R;

}

void XuatDuongTron(DUONGTRON D) {
	cout << "\nTam I x: " << D.I.x;
	cout << "Tam I y: " << D.I.y;
	cout << "\nBan kinh R= " << D.R<<endl ;
}


float  ChuVi(DUONGTRON CV) {
	return 2 * 3.14 * CV.R;
}


float  DienTich(DUONGTRON S) {
	return 3.14 * S.R * S.R;
}


int main() {
	DUONGTRON C;

	//NhapDiem(C);
	//XuatDiem(C);

	NhapDuongTron(C);
	XuatDuongTron(C);

	float Cv = ChuVi(C);
	cout <<"Chu vi cua duong tron la: " << Cv << endl;

	float dt = DienTich(C);
	cout <<"Dien tich cua duong tron la: " << dt << endl;

	return 1;
}