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
DATHUC operator*(DATHUC, DATHUC);


int main()
{
	DATHUC a;
	cout << "Nhap da thuc a: ";
	Nhap(a);

	cout << "Da thuc a vua nhap: ";
	Xuat(a);

	DATHUC b;
	cout << "\nNhap da thuc b: ";
	Nhap(b);

	cout << "Da thuc b vua nhap: ";
	Xuat(b);

	cout << "\nTich 2 da thuc la: ";
	DATHUC c = a * b;
	Xuat(c);

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(DATHUC& f)
{
	cout << "\nNhap bac n: ";
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
		cout << setw(8) << "(" << f.a[i] << ")";
		cout << "x^" << i << " + ";
	}
	cout << setw(8) << "(" << f.a[0] << ")";
	cout << endl;
}

DATHUC operator*(DATHUC f, DATHUC g)
{
	DATHUC temp;
	temp.n = f.n + g.n;
	for (int i = temp.n;i >= 0;i--)
		temp.a[i] = 0;
	for (int i = 0;i <= g.n;i++)
		for (int j = 0;j <= f.n;j++)
			temp.a[i + j] += g.a[i] * f.a[i];
	return temp;
}