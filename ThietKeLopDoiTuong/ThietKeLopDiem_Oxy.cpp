// Thiet ke lop CDiem trong mat phang Oxy
#include <iostream>
#include <string>
using namespace std;

class CDiem
{
private:
	int x;
	int y;

public:
	// Nhom phuong thuc khoi tao: co 8 phuong thuc
	void KhoiTao();
	void KhoiTao(float, float);
	void KhoiTao(const CDiem &);
	CDiem();
	CDiem(float, float);
	CDiem(const CDiem &);
	void Nhap();
	friend istream &operator>>(istream &, CDiem &);

	// Nhom phuong thuc cung cap thong tin: co 4 phuong thuc
	void Xuat();
	friend ostream &operator<<(ostream &, CDiem &);
	float getX();
	float getY();

	// Nhom phuong thuc cap nhat thong tin: co 3 phuong thuc
	CDiem &operator=(const CDiem &);
	void setX(float); // dua vao hoanh do moi
	void setY(float); // dua vao tung do moi

	// Nhom phuong thuc kiem tra:  phuong thuc
	int isTrungGoc();
	int isTrung(const CDiem &);
	int isKhongTrung(const CDiem &);
	int KTThuocHoanh();
	int KTThuocTung();
	int KTThuoc1(); // KT diem co thuoc phan tu thu 1 hay ko?
	int KTThuoc2(); // KT diem co thuoc phan tu thu 2 hay ko?
	int KTThuoc3(); // KT diem co thuoc phan tu thu 3 hay ko?
	int KTThuoc4(); // KT diem co thuoc phan tu thu 4 hay ko?
	int operator==(const CDiem &);
	int operator!=(const CDiem &);
	int operator>(const CDiem &);
	int operator>=(const CDiem &);
	int operator<(const CDiem &);
	int operator<=(const CDiem &);

	// Nhom cac phuong thuc xu ly:
	float KcachGoc();
	float KhoangCach(const CDiem &);
	float KhoangCachX(const CDiem &);
	float KhoangCachY(const CDiem &);
	CDiem DoiXungGoc();
	CDiem DoiXungHoanh();
	CDiem DoiXungTung();
	CDiem DoiXungPhanGiac1();
	CDiem DoiXungPhanGiac2();
	~CDiem();
};
// Dinh nghia phuong thuc khoi tao
void CDiem::KhoiTao()
{
	x = 0;
	y = 0;
}

void CDiem::KhoiTao(float xx, float yy)
{
	x = xx;
	y = yy;
}

void CDiem::KhoiTao(const CDiem &P)
{
	x = P.x;
	y = P.y;
}

// Dinh nghia phuong thuc thiet lap mac dinh

CDiem::CDiem()
{
	x = 0;
	y = 0;
}

CDiem::CDiem(float xx, float yy)
{
	x = xx;
	y = yy;
}

CDiem::CDiem(const CDiem &P)
{
	x = P.x;
	y = P.y;
}

// Dinh nghia phuong thuc nhap

void CDiem::Nhap()
{
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
}

// Dinh nghia toan tu vao

istream &operator>>(istream &is, CDiem &P)
{
	cout << "Nhap x: ";
	is >> P.x;
	cout << "Nhap y: ";
	is >> P.y;
	return is;
}

// Dinh nghia phuong thuc cung cap thong tin

void CDiem::Xuat()
{
	cout << "(" << x << "," << y << ")";
}

ostream &operator<<(ostream &os, CDiem &P)
{
	os << "(" << P.x << "," << P.y << ")";
	return os;
}

float CDiem::getX()
{
	return x;
}

float CDiem::getY()
{
	return y;
}

// Dinh nghia phuong thuc cap nhat thong tin
CDiem &CDiem::operator=(const CDiem &P)
{ // Toan tu gan
	x = P.x;
	y = P.y;
	return *this;
}

void CDiem::setX(float xx)
{ // dua vao hoanh do moi
	x = xx;
}
void CDiem::setY(float yy)
{ // dua vao tung do moi
	y = yy;
}

// Nhom phuong thuc kiem tra
int CDiem::isTrungGoc()
{
	if (x == 0 && y == 0)
		return 1;
	else
		return 0;
}

int CDiem::isTrung(const CDiem &P)
{
	if (x == P.x && y == P.y)
		return 1;
	return 0;
}

int CDiem::isKhongTrung(const CDiem &P)
{
	if (!(x == P.x && y == P.y))
		return 1;
	return 0;
}

int CDiem::KTThuocHoanh()
{
	if (y == 0)
		return 1;
	return 0;
}

int CDiem::KTThuocTung()
{
	if (x == 0)
		return 1;
	return 0;
}

int CDiem::KTThuoc1()
{
	if (x > 0 && y > 0)
		return 1;
	return 0;
}

int CDiem::KTThuoc2()
{
	if (x < 0 && y > 0)
		return 1;
	return 0;
}

int CDiem::KTThuoc3()
{
	if (x < 0 && y < 0)
		return 1;
	return 0;
}

int CDiem::KTThuoc4()
{
	if (x > 0 && y < 0)
		return 1;
	return 0;
}

// Dinh nghia phuong thuc so sanh

int CDiem::operator==(const CDiem &P)
{

	if (KcachGoc() == P.KcachGoc())
		return 1;
	return 0;
}

int CDiem::operator!=(const CDiem &P)
{
	if (KcachGoc() != P.KcachGoc())
		return 1;
	return 0;
}

int CDiem::operator>(const CDiem &P)
{
	if (KcachGoc() > P.KcachGoc())
		return 1;
	return 0;
}

int CDiem::operator>=(const CDiem &P)
{

	if (KcachGoc() >= P.KcachGoc())
		return 1;
	return 0;
}
int CDiem::operator<(const CDiem &P)
{
	if (KcachGoc() < P.KcachGoc())
		return 1;
	return 0;
}

int CDiem::operator<=(const CDiem &P)
{

	if (KcachGoc() <= P.KcachGoc())
		return 1;
	return 0;
}

// Dinh nghia nhom phuong thuc xu ly;
float CDiem::KcachGoc()
{
	return sqrt(x * x + y * y);
}

float CDiem::KhoangCach(const CDiem &P)
{
	return sqrt((x - P.x) * (x - P.x) + (y - P.y) * (y - P.y));
}

float CDiem::KhoangCachX(const CDiem &P)
{
	return abs(x - P.x);
}

float CDiem::KhoangCachY(const CDiem &P)
{
	return abs(y - P.y);
}

CDiem CDiem::DoiXungGoc()
{
	CDiem temp;
	temp.x = -x;
	temp.y = -y;
	return temp;
}

CDiem CDiem::DoiXungHoanh()
{
	CDiem temp;
	temp.x = -x;
	temp.y = y;
	return temp;
}

CDiem CDiem::DoiXungTung()
{
	CDiem temp;
	temp.x = x;
	temp.y = -y;
	return temp;
}

CDiem CDiem::DoiXungPhanGiac1()
{
	CDiem temp;
	temp.x = y;
	temp.y = x;
	return temp;
}

CDiem CDiem::DoiXungPhanGiac2()
{
	CDiem temp;
	temp.x = -y;
	temp.y = -x;
}

CDiem::~CDiem()
{
	return;
}

int main()
{
	CDiem diem;
	cout << "Nhap toa do diem: ";
	diem.Nhap();

	return 0;
}