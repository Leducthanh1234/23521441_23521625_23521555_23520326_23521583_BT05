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

void Nhap(SOPHUC[][100], int&, int&);
void Xuat(SOPHUC[][100], int, int);

SOPHUC ThucAoDuongDau(SOPHUC[][100], int, int);

int main()
{
	SOPHUC b[100][100];
	int k, l;
	cout << "\nNhap mang mot chieu so phuc: ";
	Nhap(b, k, l);

	cout << "\nMang mot chieu cac so phuc: ";
	Xuat(b, k, l);

	SOPHUC kq = ThucAoDuongDau(b, k, l);
	cout << "\nSo phuc thoa dieu kien: ";
	Xuat(kq);

	cout << "\n\n\nKet Thuc !!!";
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
	cout << "\n Thuc = " << x.Thuc;
	cout << "\n Ao = " << x.Ao;
}

void Nhap(SOPHUC a[][100], int& m, int& n)
{
	cout << "\nNhap so hang: ";
	cin >> n;
	cout << "Nhap so cot: ";
	cin >> m;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]: \n";
			Nhap(a[i][j]);
		}
}

void Xuat(SOPHUC a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "So phuc a[" << i << "][" << j << "]: \n";
			Xuat(a[i][j]);
			cout << endl;
		}
}

SOPHUC ThucAoDuongDau(SOPHUC a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j].Thuc > 0 && a[i][j].Ao > 0)
				return a[i][j];
	return { 0,0 };
}
