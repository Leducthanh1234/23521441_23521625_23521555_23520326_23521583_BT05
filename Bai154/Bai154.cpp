#include <iostream>
#include  <iomanip>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;

void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);
void Xuat(DIEM);

DIEM GiaoDiem(DUONGTHANG, DUONGTHANG);

int main()
{
	DUONGTHANG m;
	cout << "Nhap duong thang thu nhat:\n";
	Nhap(m);

	cout << "\nDuong thang thu nhat:\n";
	Xuat(m);

	DUONGTHANG n;
	cout << "\nNhap duong thang thu hai:\n";
	Nhap(n);

	cout << "\nDuong thang thu hai:\n";
	Xuat(n);

	DIEM A = GiaoDiem(m, n);
	cout << "\nToa do giao diem cua hai duong thang: ";
	Xuat(A);

	cout << "\n\nKet thuc!!!";
	return 0;
}

void Nhap(DUONGTHANG& l)
{
	cout << "Nhap a: ";
	cin >> l.a;
	cout << "Nhap b: ";
	cin >> l.b;
	cout << "Nhap c: ";
	cin >> l.c;
}

void Xuat(DUONGTHANG l)
{
	cout << fixed << setprecision(2) << setw(6);
	cout << "\na: " << l.a;
	cout << "\nb: " << l.b;
	cout << "\nc: " << l.c;
}

void Xuat(DIEM P)
{
	cout << setw(6) << setprecision(2);
	cout << "\nx: " << P.x;
	cout << "\ny: " << P.y;
}

DIEM GiaoDiem(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	float Dx = -d1.c * d2.b + d2.c * d1.b;
	float Dy = -d1.a * d2.c + d2.a * d1.c;

	DIEM temp;
	temp.x = Dx / D;
	temp.y = Dy / D;
	return temp;
}