//Dinh nghia tat ca toan tu so sanh cho lop doi tuong CPhanSo
#include <iostream>
#include <string>
using namespace std;
class CPhanso {
private:
	int tu;
	int mau;
public:
	void Nhap();
	void Xuat();
	string toString();
	
	CPhanso operator+ (CPhanso);
	CPhanso operator- (CPhanso);
	CPhanso operator* (CPhanso);
	CPhanso operator/ (CPhanso);
	int operator>(const CPhanso&);
	int operator<(const CPhanso&);
	int operator>=(const CPhanso&);
	int operator<=(const CPhanso&);
	int operator==(const CPhanso&);
	int operator!=(const CPhanso&);
};

void CPhanso::Nhap() {
	cout << "Nhap tu:";
	cin >> tu;
	cout << "Nhap mau: ";
	cin >> mau;
}

void CPhanso::Xuat() {
	cout << tu << "/" << mau;
}

string CPhanso::toString() {
	return to_string(tu) + "/" + to_string(mau);
}

 CPhanso CPhanso:: operator+ (CPhanso x) {
	 CPhanso tong;
	 tong.tu = tu * x.mau + x.tu*tu;
	 tong.mau = mau * x.mau;
	 return tong;
}

 CPhanso CPhanso:: operator- (CPhanso x) {
	 CPhanso hieu;
	 hieu.tu = tu * x.mau- x.tu*mau;
	 hieu.mau = mau * x.mau;
	 return hieu;
 }

 CPhanso CPhanso:: operator* (CPhanso x) {
	 CPhanso tich;
	 tich.tu = tu * x.tu;
	 tich.mau = mau * x.mau;
	 return tich;
 }

 CPhanso CPhanso:: operator/ (CPhanso x) {
	 CPhanso thuong;
	 thuong.tu = tu * x.mau;
	 thuong.mau = mau * x.tu;
	 return thuong;
 }

 int CPhanso::operator>(const CPhanso&x) {
	 CPhanso temp = *this - x;
	 if (temp.tu * temp.mau > 0)
		return 1;
	 else
		return 0;
 }
 int CPhanso::operator<(const CPhanso& x) {
	 CPhanso temp = *this - x;
	 if (temp.tu * temp.mau < 0)
		 return 1;
	 else
		 return 0;
 }

 int CPhanso::operator>=(const CPhanso& x) {
	 CPhanso temp = *this - x;
	 if (temp.tu * temp.mau >= 0)
		 return 1;
	 else
		 return 0;
 }

 int CPhanso::operator<=(const CPhanso& x) {
	 CPhanso temp = *this - x;
	 if (temp.tu * temp.mau <= 0)
		 return 1;
	 else
		 return 0;
 }

 int CPhanso::operator == (const CPhanso& x) {
	 CPhanso temp = *this -x;
	 if (temp.tu * temp.mau ==0)
		 return 1;
	 else
		 return 0;
 }

 int CPhanso::operator !=(const CPhanso& x) {
	 CPhanso temp =*this -x;
	 if (temp.tu * temp.mau == 0)
		 return 1;
	 else
		 return 0;
 }

int main() {
	CPhanso PS1, PS2;
	CPhanso kq;
	cout << "\nNhap phan so thu nhat: " << endl;
	PS1.Nhap();
	cout << "\nNhap phan so thu hai: "<<endl;
	PS2.Nhap();
	cout << "\nTong 2 phan so: ";
		kq = PS1 + PS2;
		kq.Xuat();		
	cout << "\nHieu 2 phan so: ";
		kq = PS1 - PS2;
		kq.Xuat();
	cout << "\nTich 2 phan so: ";
		kq = PS1 * PS2;
		kq.Xuat();
	cout << "\nThuong 2 phan so: ";
		kq = PS1 / PS2;
		kq.Xuat();

		cout << "\n\nSo sanh 2 phan so"<<endl;
		if (PS1 > PS2)
			cout << PS1.toString() << " lon hon " << PS2.toString()<<endl;
		if (PS1 < PS2)
			cout << PS1.toString() << " nho hon " << PS2.toString() << endl;
		if (PS1 >= PS2)
			cout << PS1.toString() << " lon hon hoac bang " << PS2.toString() << endl;
		if (PS1 <= PS2)
			cout << PS1.toString() << " nho hon hoac bang " << PS2.toString() << endl;
		if (PS1 == PS2)
			cout << PS1.toString() << " bang " << PS2.toString() << endl;
		else
			cout << PS1.toString() << " khac " << PS2.toString() << endl;

	return 0;
}
