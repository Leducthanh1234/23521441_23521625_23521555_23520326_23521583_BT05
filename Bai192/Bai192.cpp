#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct SoPhuc
{
	float Thuc;
	float Ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC&);
void Xuat(SOPHUC);

void Nhap(SOPHUC[], int&);
void Xuat(SOPHUC[], int);

int main()
{
	SOPHUC b[100];
	int k;
	cout << "\nNhap mang mot chieu so phuc: ";
	Nhap(b, k);

	cout << "\nMang mot chieu cac so phuc: ";
	Xuat(b, k);

	cout << "\n\n\nKet Thuc !!!";
	return 0;
}

void Nhap(SOPHUC& x)
{
	cout << "\nNhap phan thuc: ";
	cin >> x.Thuc;
	cout << "Nhap phan ao: ";
	cin >> x.Ao;
}

void Xuat(SOPHUC x)
{
	cout << "\n Thuc = " << x.Thuc;
	cout << "\n Ao = " << x.Ao;
}

void Nhap(SOPHUC a[], int& n)
{
	cout << "\nNhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap so phuc a[" << i << "]: ";
		Nhap(a[i]);
	}
}

void Xuat(SOPHUC a[], int n)
{
	for (int i = 0; i < n; i++)
	{ 
		cout << "\nSo phuc a[" << i << "]: ";
		Xuat(a[i]);
		cout << endl;
	}
}