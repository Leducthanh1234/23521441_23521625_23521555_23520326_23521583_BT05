#include <iostream>
#include <cmath>
using namespace std;

struct Diem
{
	int x;
	int y;
};
typedef struct Diem DIEM;

struct DuongThang
{
	int a;
	int b;
	int c;
};
typedef DuongThang DUONGTHANG;

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);

void Nhap(DUONGTHANG[], int&);
void Xuat(DUONGTHANG[], int);

DIEM GiaoDiem(DUONGTHANG, DUONGTHANG);
int ktCat(DUONGTHANG, DUONGTHANG);
int ktThuoc(DUONGTHANG, DIEM);
int ktDongQui(DUONGTHANG[], int);

int main()
{
	DUONGTHANG b[100];
	int k;
	Nhap(b, k);
	if (k < 3)
		return 0;

	Xuat(b, k);

	if (ktDongQui(b, k))
		cout << "\nTon tai 3 duong thang dong qui";
	else
		cout << "\nKhong ton tai 3 duong thang dong qui nao";

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap x :";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
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

void Nhap(DUONGTHANG a[], int& n)
{
	cout << "Nhap so duong thang can kiem tra: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap duong thang a[" << i << "]:\n";
		Nhap(a[i]);
	}
}

void Xuat(DIEM P)
{
	cout << "\nx: " << P.x;
	cout << "\ny: " << P.y;
}

void Xuat(DUONGTHANG d)
{
	cout << "\na: " << d.a;
	cout << "\nb: " << d.b;
	cout << "\nc: " << d.c;
}

void Xuat(DUONGTHANG a[], int n)
{
	cout << "\nCac duong thang vua nhap:\n";
	for (int i = 0 ; i < n; i++)
	{
		cout << "Duong thang a[" << i << "]:";
		Xuat(a[i]);
		cout << endl;
	}
}

int ktCat(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	if (D != 0)
		return 1;
	return 0;
}

int ktThuoc(DUONGTHANG d, DIEM P)
{
	if (d.a * P.x + d.b * P.y + d.c == 0)
		return 1;
	return 0;
}

DIEM GiaoDiem(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	float Dx = -d1.c * d2.b + d1.b * d2.c;
	float Dy = -d1.a * d2.c + d2.a * d1.c;
	DIEM temp;
	temp.x = Dx / D;
	temp.y = Dy / D;
	return temp;
}

int ktDongQui(DUONGTHANG a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (ktCat(a[i], a[j]))
			{
				DIEM PP = GiaoDiem(a[i], a[j]);
				for (int k = 0; k < n; k++)
					if (k != i && k != j && ktThuoc(a[k], PP))
						return 1;
			}
	return 0;
}