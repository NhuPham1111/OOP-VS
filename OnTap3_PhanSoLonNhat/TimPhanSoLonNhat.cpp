//Nhap vao 2 phan so, tim phan so lon nhat va xuat kq
#include <iostream>
#include <string>
using namespace std;
struct PHANSO {
	int tu;
	int mau;
};
typedef struct PHANSO PS;

void NhapPS(PS &x) {
	cin >> x.tu;
	cin >> x.mau;
}

void TimPSLonNhat(PS A, PS B) {
	// 1/2 ->3/6
	// 2/3 ->4/6
	if (A.tu * B.mau > B.tu * A.mau)
		cout << A.tu << "/" << A.mau;
	else if (A.tu * B.mau < B.tu * A.mau)
		cout << B.tu << "/" << B.mau;
	else
		cout << "2 phan so bang nhau";
}

int main() {
	PHANSO ps1, ps2;
	cout << "Nhap phan so thu nhat" << endl;
	NhapPS(ps1);
	cout << "Nhap phan so thu hai" << endl;
	NhapPS(ps2);
	TimPSLonNhat(ps1, ps2);

}