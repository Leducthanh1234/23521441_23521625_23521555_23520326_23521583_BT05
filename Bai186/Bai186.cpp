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

int SoSanh(PHANSO, PHANSO);
int ViTriNhoNhat(PHANSO[], int);

int main()
{
	PHANSO b[100];
	int k;

	cout << "\nNhap mang phan so: " << endl;
	Nhap(b, k);
	
	cout << "\nMang phan so vua nhap: " << endl;
	Xuat(b, k);

	cout << "\nVi tri co gia tri phan so nho nhat: " << ViTriNhoNhat(b, k);
	cout << "\n\n\nKet thuc !!!";
	return 0;
}

void Nhap(PHANSO& x)
{
	cout << "\nNhap tu: ";
	cin >> x.Tu;
	cout << "\nNhap mau: ";
	cin >> x.Mau;
}

void Xuat(PHANSO x)
{
	cout << "\nTu = " << x.Tu;
	cout << "\nMau = " << x.Mau;
}

void Nhap(PHANSO a[], int& n)
{
	cout << "\nNhap so luong phan so: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap phan so thu " << i + 1 << " : " << endl;
		Nhap(a[i]);
	}
}

void Xuat(PHANSO a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nPhan so thu " << i + 1;
		Xuat(a[i]);
	}
}
int SoSanh(PHANSO x, PHANSO y)
{
	float a = (float)x.Tu / x.Mau;
	float b = (float)y.Tu / y.Mau;
	if (a > b)
		return 1;
	if (a < b)
		return -1;
	return 0;
}

int ViTriNhoNhat(PHANSO a[], int n)
{
	int lc = 0;
	for (int i = 0; i < n; i++)
		if (SoSanh(a[i], a[lc]) == -1)
			lc = i;
	return lc + 1;
}