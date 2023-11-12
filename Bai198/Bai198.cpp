#include <iostream>
#include <iomanip>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct DuongTron
{
	DIEM I;
	float R;
};
typedef struct DuongTron DUONGTRON;

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);

void Nhap(DUONGTRON[], int&);
void Xuat(DUONGTRON[], int);

float KhoangCachGoc(DUONGTRON);
DUONGTRON GanGocNhat(DUONGTRON[], int);

int main()
{
	DUONGTRON b[100];
	int k;
	cout << "\n\n\nNhap toa do duong tron:";
	Nhap(b,k);

	cout << "\n\n\nToa do duong tron: ";
	Xuat(b,k);

	DIEM c1;
	cout << "Duong tron gan goc toa do nhat: ";
	Xuat(c1);

	cout << "\n\nKet thuc!!!";
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << "\nx: " << P.x;
	cout << "\ny: " << P.y;
}

void Nhap(DUONGTRON& s)
{
	cout << "\nNhap tam duong tron:\n";
	Nhap(s.I);
	cout << "Nhap ban kinh:\n";
	cin >> s.R;
}

void Xuat(DUONGTRON s)
{
	cout << "\nTam: ";
	Xuat(s.I);
	cout << "\nBan kinh: " << s.R;
}

void Nhap(DUONGTRON a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]:\n";
		Nhap(a[i]);
	}
}
void Xuat(DUONGTRON a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\na[" << i << "]: ";
		Xuat(a[i]);
	}
}

float KhoangCachGoc(DUONGTRON s)
{
	float kc = sqrt(s.x * s.x + s.y * s.y);
	return abs(kc - s.R);

}

DUONGTRON GanGocNhat(DUONGTRON a[], int n)
{
	DUONGTRON lc = a[0];
	for (int i = 1; i < n; i++)
		if (KhoangCachGoc(a[i]) < KhoangCachGoc(lc))
		lc = a[i];
	return lc;
}