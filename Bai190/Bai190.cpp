#include <iostream>
using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);

void Nhap(PHANSO[], int&);
void Xuat(PHANSO[], int);
bool SoSanh(PHANSO, PHANSO);
void SapTang(PHANSO[], int);


int main()
{
	PHANSO b[100];
	int n ;
	cout << "Nhap mang:\n";
	Nhap(b,n);

	cout << "\nMang sau khi nhap:\n";
	Xuat(b,n);

	SapTang(b, n);
	cout << "\nMang sau khi sap xep tang dan:\n";
	Xuat(b, n);

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(PHANSO& x)
{
	cout << "\nNhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

void Xuat(PHANSO x)
{
	cout << "\nTu: " << x.Tu;
	cout << "\nMau: " << x.Mau;
}

void Nhap(PHANSO a[], int& n)
{
	cout << "Nhap n la: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a["<<i<<"]: ";
		Nhap(a[i]);
	}
}

void Xuat(PHANSO a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		Xuat(a[i]);
		cout << endl;
	}
}

bool SoSanh(PHANSO x, PHANSO y)
{
	float a = (float)x.Tu / x.Mau;
	float b = (float)y.Tu / y.Mau;
	if (a > b)
		return true;
	return false;
}

void SapTang(PHANSO a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j < n; j++)
			if (SoSanh(a[i], a[j]) == true)
				swap(a[i], a[j]);
}