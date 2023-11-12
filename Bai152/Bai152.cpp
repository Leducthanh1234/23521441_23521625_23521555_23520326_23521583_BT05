#include<iostream>
#include<iomanip>
#include<cmath>
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

int ktSongSong(DUONGTHANG, DUONGTHANG);

int main()
{
	DUONGTHANG m;
	cout << "Nhap duong thang: \n";
	Nhap(m);

	cout << "\nDuong thang vua nhap: ";
	Xuat(m);

	DUONGTHANG n;
	cout << "\nNhap duong thang: \n";
	Nhap(n);

	cout << "\nDuong thang vua nhap: ";
	Xuat(n);

	if (ktSongSong(m, n))
		cout << "\nHai duong thang trung nhau: ";
	else
		cout << "\nHai duong thang khong trung nhau: ";

	cout << "\n\n\nKet thuc!!!";
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
	cout << "\na: " << d.a;
	cout << "\nb: " << d.b;
	cout << "\nc: " << d.c << endl;
}

int ktSongSong(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	float Dx = -d1.c * d2.b + d2.c * d1.b;
	if (D == 0 && Dx != 0)
		return 1;
	return 0;
}
