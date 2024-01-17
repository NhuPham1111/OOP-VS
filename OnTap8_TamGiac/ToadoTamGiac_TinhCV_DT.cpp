//Viết chương trình nhập tọa độ 3 đirnh của tam giác trong tọa độ Oxy. Tính Chu vi, diện tích và tọa độ trọng tâm. Tọa độ trọng tâm = tổng hoành độ chia 3, tổng tung dộ chia 3.

#include <iostream>
#include <cmath>

using namespace std;

typedef struct DIEM {

	float x;
	float y;
};

struct TAMGIAC {

	DIEM	a;
	DIEM	b;
	DIEM	c;

};
typedef struct TAMGIAC TG;

void Nhap(DIEM &p){
	float temp;
	cout << "Nhap x: ";
	cin >> p.x;
	//p.x= temp;
	cout << "Nhap y: ";
	cin >> p.y;
	//p.y= temp;
}

void Xuat(DIEM p) {
	cout << "\n x = " << p.x;
	cout << "\n y= " << p.y;
}

float KC(DIEM  M, DIEM  N) {
	return  sqrt((N.x - M.x) * (N.x - M.x) + (N.y - M.y) * (N.y - M.y));
}

void NhapTamGiac(TG &t) {
	cout << "Nhap toa do diem A: "<<endl;
	Nhap(t.a);
	cout << "Nhap toa do diem B: " << endl;
	Nhap(t.b);
	cout << "Nhap toa do diem C: "<<endl ;
	Nhap(t.c);
}

void  XuatTamGiac(TG T) {
	cout << "\n A: ";
	Xuat(T.a);
	cout << "\n B: ";
	Xuat(T.b);
	cout << "\n C: ";
	Xuat(T.c);
	 
}


float CHUVITG(TG t) {

	float a = KC(t.b, t.c);
	float b = KC(t.c, t.a);
	float c = KC(t.a, t.b);

	return (a + b + c);
}

float DIENTICH(TG t) {
	float a = KC(t.b, t.c);
	float b = KC(t.c, t.a);
	float c = KC(t.a, t.b);
	float p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

	DIEM TrongTamTG(TG t) {
		DIEM temp;
		temp.x = (t.a.x + t.b.x + t.c.x) / 3;
		temp.y = (t.a.y + t.b.y + t.c.y) / 3;

		return temp;	
	}


int main() {

	TG tg; TG A, B, C;
	NhapTamGiac(tg);
	XuatTamGiac(tg);

	cout << "Khoang cach A va B: " << KC(tg.a, tg.b) << endl;
	cout << "Khoang cach B va C: " << KC(tg.b, tg.c) << endl;
	cout << "Khoang cach A va C: " << KC(tg.a, tg.c) << endl;


	float ChuVi = CHUVITG(tg);
	cout << "\nChu vi tam giac = " << ChuVi<<endl;

	float DienTich = DIENTICH(tg);
	cout << "Dien tich tam giac = " << DienTich << endl;

	DIEM P = TrongTamTG(tg);
	cout << "Trong tam TG la ";
	Xuat(P);


	return 0;
}