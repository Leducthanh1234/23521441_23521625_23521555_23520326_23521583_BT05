#include<iostream>
#include<iomanip>
#include<cmath>
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

void HoanVi(SOPHUC&, SOPHUC&);
void SapTang(SOPHUC[], int);

int main()
{
	SOPHUC b[100];
	int k;

	Nhap(b, k);
	cout << "\nMang so phuc vua nhap: ";
	Xuat(b, k);

	cout << "\nMang so phuc tang dan theo phan thuc: ";
	SapTang(b, k);
	Xuat(b, k);

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(SOPHUC& x)
{
	cout << "Nhap phan thuc: ";
	cin >> x.Thuc;
	cout << "Nhap phan ao: ";
	cin >> x.Ao;
}

void Xuat(SOPHUC x)
{
	cout << "\nThuc = " << x.Thuc;
	cout << "\nAo = " << x.Ao << endl;
}

void Nhap(SOPHUC a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap a[" << i << "] \n";
		Nhap(a[i]);
	}
}

void Xuat(SOPHUC a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\na[" << i << "] ";
		Xuat(a[i]);
	}
}

void HoanVi(SOPHUC& x, SOPHUC& y)
{
	SOPHUC temp = x;
	x = y;
	y = temp;
}

void SapTang(SOPHUC a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[i].Thuc > a[j].Thuc)
				HoanVi(a[i], a[j]);
}

