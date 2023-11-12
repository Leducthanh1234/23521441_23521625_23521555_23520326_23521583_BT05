#include <iostream>
#include <iomanip>
using namespace std;

struct DIEM
{
	float x;
	float y;
};
typedef struct DIEM DIEM;

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

int main()
{
	DUONGTRON b[100];
	int k;
	cout << "\nNhap mang duong tron " << endl;
	Nhap(b, k);

	cout << "\nMang duong tron vua nhap: " << endl;
	Xuat(b, k);
	cout << "\n\n\nKet thuc !!!";
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << endl;
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
	cout << "\nNhap tam: \n" << endl;
	Nhap(s.I);
	cout << "\nNhap ban kinh: ";
	cin >> s.R;
}

void Xuat(DUONGTRON s)
{
	cout << setw(6) << setprecision(3);
	cout << "\nTam: ";
	Xuat(s.I);
	cout << "\nBan kinh: " << s.R << endl;
}

void Nhap(DUONGTRON a[], int& n)
{
	cout << "\nNhap so luong duong tron trong mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap a[" << i << "]: " << endl;
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