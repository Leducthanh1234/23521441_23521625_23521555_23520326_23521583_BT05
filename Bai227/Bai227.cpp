#include <iostream>
using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef PhanSo PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);

void Nhap(PHANSO[][100], int&, int&);
void Xuat(PHANSO[][100], int, int);

int main()
{
	PHANSO b[100][100];
	int k, l;
	Nhap(b, k, l);

	cout << "\nMa tran vua nhap:\n";
	Xuat(b, k, l);

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
	cout << "\nTu: " << x.Tu;
	cout << "\nMau: " << x.Mau;
}

void Nhap(PHANSO a[][100], int& m, int& n) 
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]:\n";
			Nhap(a[i][j]);
		}
	}
}
void Xuat(PHANSO a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "A[" << i << "][" << j << "]: ";
			Xuat(a[i][j]);
			cout << endl;
		}
	}
}