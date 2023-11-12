#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct DaThuc
{
	int n;
	float a[100];
};
typedef struct DaThuc DATHUC;

void Nhap(DATHUC&);
void Xuat(DATHUC);

DATHUC operator*(DATHUC, DATHUC);

int main()
{
	DATHUC a;
	DATHUC b;
	cout << "\nNhap da thuc f: ";
	Nhap(a);
	cout << "\nNhap da thuc g: ";
	Nhap(b);

	cout << "\nDa thuc f: ";
	Xuat(a);
	cout << "\nDa thuc g: ";
	Xuat(b);

	DATHUC c = a * b;
	cout << "\nTich cua 2 da thuc: ";
	Xuat(c);

	cout << "\n\n\nKet Thuc !!!";
	return 0;
}

void Nhap(DATHUC& f)
{
	cout << "\nNhap n: ";
	cin >> f.n;
	for (int i = f.n; i >= 0; i--)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> f.a[i];
	}
}

void Xuat(DATHUC f)
{
	for (int i = f.n; i >= 1; i--)
	{
		cout << setw(10) << "(" << f.a[i] << ")";
		cout << "x^" << i << " + ";
	}
	cout << setw(10) << "(" << f.a[0] << ") ";
}

DATHUC operator*(DATHUC f, DATHUC g)
{
	DATHUC temp;
	temp.n = f.n + g.n;
	for (int i = temp.n; i >= 0; i--)
		temp.a[i] = 0;
	for (int i = 0; i <= g.n; i++)
		for (int j = 0; j <= f.n; j++)
			temp.a[i + j] += g.a[i] * f.a[j];
	return temp;
}