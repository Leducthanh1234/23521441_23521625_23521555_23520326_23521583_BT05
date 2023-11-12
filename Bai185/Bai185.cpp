#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);

void Nhap(PHANSO[], int&);
void Xuat(PHANSO[], int);

int ucln(int, int);
void RutGon(PHANSO&);
int SoSanh(PHANSO, PHANSO);
PHANSO LonNhat(PHANSO[], int);

int main()
{
	PHANSO b[100];
	int k;

	Nhap(b, k);
	cout << "\nMang phan so vua nhap: ";
	Xuat(b, k);

	PHANSO kq = LonNhat(b, k);
	cout << "\nPhan so lon nhat: ";
	Xuat(kq);

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(PHANSO& x)
{
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

void Xuat(PHANSO x)
{
	cout << x.Tu << "/" << x.Mau;
}

void Nhap(PHANSO a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap a[" << i << "] \n";
		Nhap(a[i]);
	}
}

void Xuat(PHANSO a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\na[" << i << "]= ";
		Xuat(a[i]);
	}
}

int ucln(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
		if (a > b)
			a = a - b;
		else
			b = b - a;
	return a + b;
}

void RutGon(PHANSO& x)
{
	int kq = ucln(x.Tu, x.Mau);
	x.Tu = x.Tu / kq;
	x.Mau = x.Mau / kq;
}

int SoSanh(PHANSO x, PHANSO y)
{
	RutGon(x);
	RutGon(y);
	if (y.Mau == x.Mau)
	{
		if (y.Tu < x.Tu)
			return 1;
		return 0;
	}
	else
	{
		x.Tu = x.Tu * y.Mau;
		y.Tu = y.Tu * x.Mau;
		if (y.Tu < x.Tu)
			return 1;
		return 0;
	}
}

PHANSO LonNhat(PHANSO a[], int n)
{
	PHANSO lc = a[0];
	for (int i = 0; i < n; i++)
		if (SoSanh(a[i], lc) == 1)
			lc = a[i];
	return lc;
}