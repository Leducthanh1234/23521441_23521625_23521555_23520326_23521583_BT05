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

int ktVuongGoc(DUONGTHANG, DUONGTHANG);

int main()
{
	DUONGTHANG m, n;

	cout << "Nhap duong thang thu nhat: " << endl;
	Nhap(m);
	cout << "\nNhap duong thang thu hai: " << endl;
	Nhap(n);

	cout << "\n\nDuong thang thu nhat: ";
	Xuat(m);
	cout << "\nDuong thang thu hai: ";
	Xuat(n);

	int kq = ktVuongGoc(m, n);
	cout << "\n\nKet qua: ";
	if (kq == 1)
		cout << "Hai duong thang vuong goc nhau.";
	else
		cout << "Hai duong thang khong vuong goc nhau.";
	cout << "\n\n\nKet thuc !!!";
	return 0;
}

void Nhap(DUONGTHANG& d)
{
	cout << "Nhap a: ";
	cin >> d.a;
	cout << "Nhap b: ";
	cin >> d.b;
	cout << "Nhap c: ";
	cin >> d.c;
}

void Xuat(DUONGTHANG d)
{
	cout << d.a << "x + " << d.b << "y + " << d.c << " = 0";
}

int ktVuongGoc(DUONGTHANG d1, DUONGTHANG d2)
{
	if ((d1.a * d2.a + d1.b * d2.b) == 0)
		return 1;
	return 0;
}