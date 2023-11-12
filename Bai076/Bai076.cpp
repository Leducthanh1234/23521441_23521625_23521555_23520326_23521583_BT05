#include <iostream>
using namespace std;

struct HonSo
{
	int Nguyen;
	int Tu;
	int Mau;
};
typedef HonSo HONSO;

void Nhap(HONSO&);
void Xuat(HONSO);

int ucln(int, int);
void RutGon(HONSO&);
HONSO Hieu(HONSO, HONSO);

int main()
{
	HONSO a;
	cout << "Nhap hon so a:\n";
	Nhap(a);

	cout << "\nHon so a:";
	Xuat(a);

	HONSO b;
	cout << "\nNhap hon so b:\n";
	Nhap(b);

	cout << "\nHon so b:";
	Xuat(b);

	HONSO c = Hieu(a, b);
	cout << "\nHieu a va b: ";
	Xuat(c);

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(HONSO& x)
{
	cout << "\nNhap nguyen: ";
	cin >> x.Nguyen;
	cout << "\nNhap tu: ";
	cin >> x.Tu;
	cout << "\nNhap mau: ";
	cin >> x.Mau;
}

void Xuat(HONSO x)
{
	cout << "\nNguyen: " << x.Nguyen;
	cout << "\nTu: " << x.Tu;
	cout << "\nMau: " << x.Mau;
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

void RutGon(HONSO& x)
{
	int kq = ucln(x.Tu, x.Mau);
	x.Tu = x.Tu / kq;
	x.Mau = x.Mau / kq;
	x.Nguyen = x.Nguyen + x.Tu / x.Mau;
	x.Tu = x.Tu % x.Mau;
}

HONSO Hieu(HONSO x, HONSO y)
{
	HONSO temp;
	temp.Nguyen = x.Nguyen - y.Nguyen;
	temp.Tu = x.Tu - y.Tu;
	temp.Mau = x.Mau - y.Mau;
	RutGon(temp);
	return temp;
}