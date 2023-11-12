#include <iostream>
using namespace std;

struct SoPhuc
{
	int Thuc;
	int Ao;
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
	Nhap(b, k);

	Xuat(b, k);

	cout << "\n\n\nKet thuc !!!";
	return 0;
}

void Nhap(SOPHUC& x)
{
	cout << "Nhap phan thuc: ";
	cin >> x.Thuc;
	cout << "Nhap phan ao: ";
	cin >> x.Ao;
}

void Nhap(SOPHUC a[], int& n)
{
	cout << "Nhap so luong so phuc can xuat: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap so phuc a[" << i << "]:\n";
		Nhap(a[i]);
	}
}

void Xuat(SOPHUC x)
{
	cout << "\nPhan thuc: " << x.Thuc;
	cout << "\nPhan ao: " << x.Ao;
}

void Xuat(SOPHUC a[], int n)
{
	cout << "\nCac so phuc vua nhap:";
	for (int i = 0; i < n; i++)
	{
		cout << "\nSo phuc a[" << i << "]:";
		Xuat(a[i]);
		cout << endl;
	}
}