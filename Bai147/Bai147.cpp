#include <iostream>
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

int main()
{
	DUONGTHANG m;
	cout << "Nhap duong thang m" << endl;
	Nhap(m);

	cout << "\nDuong thang m vua nhap:";
	Xuat(m);

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(DUONGTHANG& d)
{
	cout << "Nhap he so a: ";
	cin >> d.a;
	cout << "Nhap he so b: ";
	cin >> d.b;
	cout << "Nhap he so c: ";
	cin >> d.c;
}

void Xuat(DUONGTHANG d)
{
	cout << "\na: " << d.a;
	cout << "\nb: " << d.b;
	cout << "\nc: " << d.c;
}