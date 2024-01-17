//Viet chuong trinh nhap vao diem toan, van	cua 1 hoc sinh. Tinh diem tb va xuat kq
#include <iostream>
#include <string>
using namespace std;

class CHocSinh {

private:
	string hoten;
	int toan;
	int van;
	float dtb;

public:
	void Nhap();
	void Xuat();
	void Xuly();
};

	void CHocSinh:: Nhap() {
		cout << "Nhap ho ten hs: ";
		getline(cin, hoten);
		cout << "Nhap diem mon toan: ";
		cin >> toan;
		cout << "Nhap diem mon van: ";
		cin >> van;
	}

	
	void CHocSinh::Xuly() {
		dtb = (float)(toan + van) / 2;
	}

	void CHocSinh::Xuat() {
		cout << "\nHo ten HS: " << hoten;
		cout << "\nDiem mon toan = " << toan;
		cout << "\nDiem mon van = " << van;
		cout << "\nDiem TB 2 mon = " << dtb;

	}

int main() 
{
	CHocSinh hs;
	hs.Nhap();
	hs.Xuly();
	hs.Xuat();

	return 1;
}