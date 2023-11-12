#include <iostream>
#include <iomanip>
#include <cmath>
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

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);

void Nhap(DUONGTHANG [],int&);
void Xuat(DUONGTHANG [], int);

float KhoangCach(DUONGTHANG, DIEM);
DUONGTHANG GanDiemNhat(DUONGTHANG[], int,DIEM);

int main()
{
	DIEM A;
	cout << "Nhap diem A:\n";
	Nhap(A);

	cout << "\nDiem A:";
	Xuat(A);

	DUONGTHANG m[100];
	int k;

	cout << "\n\nNhap cac duong thang:\n";
	Nhap(m, k);

	cout << "\nCac duong thang:\n";
	Xuat(m, k);

	cout << "\nDuong thang gan diem P nhat la:\n";
	Xuat(GanDiemNhat(m, k, A));

	cout << "\n\n\nKet thuc !!!";
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap hoanh do: ";
	cin >> P.x;
	cout << "Nhap tung do: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << "\nHoanh do: " << P.x;
	cout << "\nTung do: " << P.y;
}

void Nhap(DUONGTHANG& d)
{
	cout << "\nNhap a: ";
	cin >> d.a;
	cout << "Nhap b: ";
	cin >> d.b;
	cout << "Nhap c: ";
	cin >> d.c;
}

void Xuat(DUONGTHANG d)
{
	cout << "\na: " << d.a;
	cout << "\nb: "<<d.b;
	cout << "\nc: "<< d.c;
	cout <<"\n("<<d.a<<")" << "x + " <<"("<< d.b<<")" << "y + " <<"("<< d.c<<")" << " = 0";
}

void Nhap(DUONGTHANG a[], int& n)
{
	cout << "Nhap n la: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}
void Xuat(DUONGTHANG a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		Xuat(a[i]);
		cout << endl;
	}
}

float KhoangCach(DUONGTHANG d, DIEM P)
{
	float Tu = abs(d.a * P.x + d.b * P.y + d.c);
	float Mau = sqrt(d.a * d.a + d.b * d.b);
	return ((float)Tu / Mau);
}

DUONGTHANG GanDiemNhat(DUONGTHANG a[], int n,DIEM P)
{
	DUONGTHANG lc = a[0];
	for (int i=0;i<n;i++)
		if(KhoangCach(a[i],P)<KhoangCach(lc,P))
			lc=a[i];
	return lc;
}