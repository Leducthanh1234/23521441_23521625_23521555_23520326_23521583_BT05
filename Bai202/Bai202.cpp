#include <iostream>
#include <cmath>
using namespace std;

struct Diem
{
	int x;
	int y;
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

float KhoangCach(DIEM, DIEM);
int TuongDoi(DUONGTRON, DUONGTRON);
int ktDoiMotCatNhau(DUONGTRON[], int);

int main()
{
	DUONGTRON b[100];
	int k;
	Nhap(b, k);
	if (k < 3)
		return 0;

	Xuat(b, k);

	if (ktDoiMotCatNhau(b, k) == 1)
		cout << "\nCac duong tron doi mot cat nhau";
	else
		cout << "\nCac duong tron khong doi mot cat nhau";

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Nhap(DUONGTRON& s)
{
	cout << "Nhap tam: ";
	Nhap(s.I);
	cout << "Nhap ban kinh: ";
	cin >> s.R;
}

void Nhap(DUONGTRON a[], int& n)
{
	cout << "Nhap so duong tron can kiem tra: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap duong tron a[" << i << "]:\n";
		Nhap(a[i]);
	}
}

void Xuat(DIEM P)
{
	cout << "\nx: " << P.x;
	cout << "\ny: " << P.y;
}

void Xuat(DUONGTRON s)
{
	cout << "\nTam duong tron: ";
	Xuat(s.I);
	cout << "\nBan kinh: " << s.R;
}

void Xuat(DUONGTRON a[], int n)
{
	cout << "\nCac duong tron vua nhap: ";
	for (int i = 0; i < n; i++)
	{
		cout << "\nDuong tron a[" << i << "]:";
		Xuat(a[i]);
		cout << endl;
	}
}

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt(pow(Q.x - P.x, 2) + pow(Q.y - P.y, 2));
}

int TuongDoi(DUONGTRON s1, DUONGTRON s2)
{
	float kc = KhoangCach(s1.I, s2.I);
	if (kc == 0 && s1.R == s2.R)
		return 0;
	if (kc > s1.R + s2.R)
		return 1;
	if (kc == s1.R + s2.R)
		return 2;
	if (kc > abs(s1.R - s2.R) && kc < s1.R + s2.R)
		return 3;
	if (kc == abs(s1.R - s2.R))
		return 4;
	return 5;
}

int ktDoiMotCatNhau(DUONGTRON a[], int n)
{
	int flag = 1;
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (TuongDoi(a[i], a[j]) != 3)
				flag = 0;
	return flag;
}