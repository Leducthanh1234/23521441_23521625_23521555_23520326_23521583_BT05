#include <iostream>
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

SOPHUC Tong(SOPHUC[], int);
SOPHUC Tong(SOPHUC, SOPHUC);

int main()
{
	SOPHUC b[100];
	int k;
	Nhap(b, k);

	cout << "\nMang cac so phuc:\n";
	Xuat(b, k);

	SOPHUC c = Tong(b, k);
	cout << "\nTong cac so phuc : ";
	Xuat(c);
	cout << "'\n\n\nKet thuc!!!";
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
	cout << "\nPhan thuc: " << x.Thuc << endl;
	cout << "Phan ao: " << x.Ao << endl;
}

void Nhap(SOPHUC a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap mang cac so phuc: \n";
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap so phuc thu "<<i+1<<" :\n";
		Nhap(a[i]);
	}
}
void Xuat(SOPHUC a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "So phuc thu " << i + 1 << " :";
		Xuat(a[i]);
	}
}

SOPHUC Tong(SOPHUC a, SOPHUC b)
{
	SOPHUC temp;
	temp.Thuc = a.Thuc + b.Thuc;
	temp.Ao = a.Ao + b.Ao;
	return temp;
}

SOPHUC Tong(SOPHUC a[], int n)
{
	SOPHUC s = { 0,0 };
	for (int i = 0;i < n;i++)
		s = Tong(s, a[i]);
	return s;
}