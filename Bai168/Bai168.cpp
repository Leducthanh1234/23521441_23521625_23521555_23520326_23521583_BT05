#include <iostream>
#include <iomanip>
using namespace std;

struct DaThuc
{
	int n;
	float a[100];
};
typedef struct DaThuc DATHUC;

void Nhap(DATHUC&);
void Xuat(DATHUC);
DATHUC operator+(DATHUC, DATHUC);

int main()
{
	DATHUC a;
	cout << "Nhap da thuc a:\n";
	Nhap(a);

	cout << "\nDa thuc a:\n";
	Xuat(a);

	DATHUC b;
	cout << "\nNhap da thuc b:\n";
	Nhap(b);

	cout << "\nDa thuc b:\n";
	Xuat(b);

	DATHUC c;
	c = a + b;
	cout << "\nDa thuc sau khi cong:\n";
	Xuat(c);

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(DATHUC& f)
{
	cout << "Nhap so mu: ";
	cin >> f.n;
	for (int i = f.n; i >= 0; i--)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> f.a[i];
	}
}

void Xuat(DATHUC f)
{
	cout << "So mu: " << f.n;
	for (int i = f.n; i >= 1; i--)
	{
		cout << setw(10) << "(" << f.a[i] << ")";
		cout << "x^" << i << " + ";
	}
	cout << setw(10) << "(" << f.a[0] << ")";
}

int LonNhat(int a, int b)
{
	int lc = a;
	if (b > lc)
		lc = b;
	return lc;
}

DATHUC operator+(DATHUC f, DATHUC g)
{
	DATHUC temp;
	temp.n = LonNhat(f.n,g.n);
	for (int i = temp.n; i >= 0; i--)
		temp.a[i] = 0;
	for (int i = f.n; i >= 0; i--)
		temp.a[i] += f.a[i];
	for (int i = g.n; i >= 0; i--)
		temp.a[i] += g.a[i];
	return temp;
}