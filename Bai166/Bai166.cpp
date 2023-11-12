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
DATHUC DaoHam(DATHUC, int);

int main()
{
	DATHUC e;

	cout << "Nhap da thuc can dao ham: ";
	Nhap(e);
	cout << "Da thuc luc dau: ";
	Xuat(e);

	DATHUC g;

	int b;
	cout << setw(6) << setprecision(3);
	g = DaoHam(e,b);
	cout << "\nKet qua: ";
	Xuat(g);
	cout << "\n\nKet thuc!!!";
	return 0;
}

void Nhap(DATHUC& f)
{
	cout << "Nhap n: ";
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
	cout << setw(8) << "(" << f.a[0] << ") ";
}

DATHUC DaoHam(DATHUC f, int k)
{
	DATHUC temp = f;
	for (int i = 1; i <= k; i++)
		temp = DaoHam(temp);
	return temp;
}