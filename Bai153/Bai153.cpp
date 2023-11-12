#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;

void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);

int ktCat(DUONGTHANG, DUONGTHANG);

int main()
{
	DUONGTHANG a, b;
	cout << "\nNhap duong thang thu nhat: " << endl;
	Nhap(a);
	cout << "\nNhap duong thang thu hai: " << endl;
	Nhap(b);

	cout << "\nDuong thang thu nhat: ";
	Xuat(a);
	cout << "\nDuong thang thu hai: ";
	Xuat(b);
	
	int kq = ktCat(a, b);
	if (kq == 1)
		cout << "\n\nHai duong thang cat nhau";
	else
		cout << "\n\nHai duong thang khong cat nhau";
	cout << "\n\n\nKet thuc !!!";
	return 0;
}

void Nhap(DUONGTHANG& d)
{
	cout << "\nNhap a: ";
	cin >> d.a;
	cout << "\nNhap b: ";
	cin >> d.b;
	cout << "\nNhap c: ";
	cin >> d.c;
}

void Xuat(DUONGTHANG d)
{
	cout << "\na: " << d.a;
	cout << "\nb: " << d.b;
	cout << "\nc: " << d.c;
}

int ktCat(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	if (D != 0)
		return 1;
	return 0;
}