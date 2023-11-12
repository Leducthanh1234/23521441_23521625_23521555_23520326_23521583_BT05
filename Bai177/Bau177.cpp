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

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(DIEM[], int&);
void Xuat(DIEM[], int);

float KhoangCachGoc(DIEM);
DIEM GanGocNhat(DIEM[], int);

int main()
{
	DIEM A;

	cout << "Nhap diem:";
	Nhap(A);

	cout << "Diem da nhap:";
	Xuat(A);

	DIEM k[100];
	int n;

	cout << "Cac diem trong mang: ";
	Nhap(k, n);
	Xuat(k,n);
	
	int kq = GanGocNhat(k, n);
	cout << "\nKet qua: " << kq;
	cout << "\n\nKet thuc!!!";
	return 0;
}

void Nhap(DIEM a[], int& n)
{
	cout << "Nhap n la: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}

void Xuat(DIEM a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Diem thu " << i + 1 << ":";
		Xuat(a[i]);
		cout << endl;
	}
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
	cout << setw(6) << setprecision(3);
	cout << "\nx: " << P.x;
	cout << "\ny: " << P.y;
}

float KhoangCachGoc(DIEM P)
{
	return sqrt(P.x * P.x + P.y * P.y);
}

DIEM GanGocNhat(DIEM a[], int n)
{
	DIEM lc = a[0];
	for (int i = 0; i <= n - 1; i++)
		if (KhoangCachGoc(a[i]) <
			KhoangCachGoc(lc))
		lc = a[i];
	return lc;
}