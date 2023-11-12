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

void Nhap(SOPHUC[][100], int&, int&);
void Xuat(SOPHUC[][100], int, int);

SOPHUC ThucLonNhat(SOPHUC[][100], int, int);

int main()
{
	SOPHUC b[100][100];
	int k, l;

	Nhap(b, k, l);
	cout << "\nMa tran so phuc vua nhap: \n";
	Xuat(b, k, l);

	cout << "\nSo phuc co phan thuc lon nhat: ";
	Xuat(ThucLonNhat(b, k, l));

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
	cout << setw(15) << x.Thuc << " + (" << x.Ao << ")i";
}

void Nhap(SOPHUC a[][100], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "\nNhap so phuc a[" << i << "," << j << "]\n";
			Nhap(a[i][j]);
		}
}

void Xuat(SOPHUC a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			Xuat(a[i][j]);
		cout << endl;
	}
}

SOPHUC ThucLonNhat(SOPHUC a[][100], int m, int n)
{
	SOPHUC lc = a[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j].Thuc > lc.Thuc)
				lc = a[i][j];
	return lc;
}