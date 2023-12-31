﻿#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct Ngay
{
	int Ngay;
	int Thang;
	int Nam;
};
typedef struct Ngay NGAY;

void Nhap(NGAY&);
void Xuat(NGAY);

void Nhap(NGAY[], int&);
void Xuat(NGAY[], int);

int main()
{
	NGAY b[100];
	int k;
	cout << "\nNhap mang mot chieu cac ngay: ";
	Nhap(b, k);

	cout << "\nMang mot chieu cac ngay: ";
	Xuat(b, k);

	cout << "\n\n\nKet Thuc !!!";
	return 0;
}

void Nhap(NGAY& x)
{
	cout << "\nNhap ngay: ";
	cin >> x.Ngay;
	cout << "Nhap thang: ";
	cin >> x.Thang;
	cout << "Nhap nam: ";
	cin >> x.Nam;
}

void Xuat(NGAY x)
{
	cout << "\n Ngay: " << x.Ngay;
	cout << "\n Thang: " << x.Thang;
	cout << "\n Nam: " << x.Nam;
}

void Nhap(NGAY a[], int& n)
{
	cout << "\nNhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Ngay a[" << i << "]: ";
		Nhap(a[i]);
	}
}

void Xuat(NGAY a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nNgay a[" << i << "]: ";
		Xuat(a[i]);
		cout << endl;
	}
}