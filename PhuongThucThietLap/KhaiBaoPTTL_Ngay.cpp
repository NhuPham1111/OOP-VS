// Hay khai bao va dinh nghia phuong thuc thiet lap co ban cho doi tuong ngay

#include <iostream>
using namespace std;
class CNgay
{
private:
	int dd;
	int mm;
	int yy;

public:
	CNgay();			   // phuong thuc thiet lap mac dinh
	CNgay(const CNgay &x); // phuong thuc thiet sao chep
	CNgay(int, int, int);  // phuong thuc thiet lap khi biet day du thong tin
};

// Dinh nghia phuong thuc thiet lap mac dinh

CNgay::CNgay()
{
	dd = 11;
	mm = 11;
	yy = 1996;
	// Trong do, dd, mm, yy la thuoc tinh cua doi tuong dang goi thuc hien phuong thuc thiet lap mac dinh
}

// Dinh nghia phuong thuc thiet lap sao chep
CNgay::CNgay(const CNgay &x)
{
	dd = x.dd;
	mm = x.mm;
	yy = x.yy;
	// Trong do, dd, mm, yy la thuoc tinh cua doi tuong dang goi thuc hien phuong thuc thiet lap sao chep, x la tham so dau vao
}

// Dinh nghia phuong thuc thiet lap khi biet day du thong tin
CNgay::CNgay(int ng, int thg, int nam)
{
	dd = ng;
	mm = thg;
	yy = nam;
}

int main()
{

	CNgay DD;
	cout << "ngay thang nam from main branch";

	return 1;
}