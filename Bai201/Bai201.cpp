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

void Nhap(DUONGTRON [], int&);
void Xuat(DUONGTRON [], int);

int ktTiepXucOy(DUONGTRON);
int KiemTra(DUONGTRON[], int);

int main()
{
	DUONGTRON b[100];
	int k;

	cout << "Nhap mang ban dau:\n";
	Nhap(b, k);

	cout << "\nMang ban dau:\n";
	Xuat(b, k);

	if (KiemTra(b, k) == 1)
		cout << "Co duong tron tiep xuc truc Oy";
	else
		cout << "Khong co duong tron tiep xuc truc Oy";

	cout << "\n\n\nKet thuc!!!";
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

void Nhap(DUONGTRON& s)
{
	cout << "\nNhap tam I:\n";
	Nhap(s.I);
	cout << "Nhap ban kinh: ";
	cin >> s.R;
}

void Xuat(DUONGTRON s)
{
	cout << "\nTam I:";
	Xuat(s.I);
	cout << "\nBan kinh: " << s.R;
}

void Nhap(DUONGTRON a[], int& n)
{
	cout << "Nhap n la: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}

void Xuat(DUONGTRON a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		Xuat(a[i]);
		cout << endl;
	}
}

int ktTiepXucOy(DUONGTRON s)
{
	if (abs(s.I.x) == s.R)
		return 1;
	return 0;
}

int KiemTra(DUONGTRON a[], int n)
{
	for (int i = 0; i < n; i++)
		if (ktTiepXucOy(a[i]) == 1)
			return 1;
	return 0;
}