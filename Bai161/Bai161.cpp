#include <iostream>
#include <iomanip>
using namespace std;

struct DaThuc
{
	float a[100];
	int n;
};
typedef struct DaThuc DATHUC;

void Nhap(DATHUC&);
void Xuat(DATHUC);

int LonNhat(int, int);
DATHUC Tong(DATHUC, DATHUC);
DATHUC Hieu(DATHUC, DATHUC);

int main()
{
	DATHUC a;
	cout << "Nhap da thuc 1:\n";
	Nhap(a);
	cout << "Da thuc vua nhap: ";
	Xuat(a);

	DATHUC b;
	cout << "\nNhap da thuc 2:\n";
	Nhap(b);
	cout << "Da thuc vua nhap: ";
	Xuat(b);

	cout << "\nHieu la: ";
	Xuat(Hieu(a, b));

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(DATHUC& f)
{
	cout << "Nhap bac da thuc: ";
	cin >> f.n;
	for (int i = f.n; i >= 0; i--)
	{
		cout << "Nhap he so a[" << i << "]: ";
		cin >> f.a[i];
	}
}

void Xuat(DATHUC f)
{
	for (int i = f.n; i >= 1; i--)
	{
		cout << f.a[i];
		cout << "x^" << i;
		cout << setw(10);
	}
	cout << f.a[0];
}

int LonNhat(int a, int b)
{
	int lc = a;
	if (b > lc)
		lc = b;
	return lc;
}

DATHUC Tong(DATHUC f, DATHUC g)
{
	DATHUC temp;
	temp.n = LonNhat(f.n, g.n);

	for (int i = temp.n; i >= 0; i--)
		temp.a[i] = 0;
	for (int i = f.n; i >= 0; i--)
		temp.a[i] += f.a[i];
	for (int i = temp.n; i >= 0; i--)
		temp.a[i] += g.a[i];
	return temp;
}

DATHUC Hieu(DATHUC f, DATHUC g)
{
	for (int i = 0; i <= g.n; i++)
		g.a[i] = -g.a[i];
	return Tong(f, g);
}