#include<iostream>
#include<iomanip>
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

int main()
{
	PHANSO b[100];
	int k;
	Nhap(b, k);

	cout << "\n\n\nKet thuc";
	return 0;
}

void Nhap(PHANSO& x)
{
	cout << "Nhap tu : ";
	cin >> x.Tu;
	cout << "Nhap mau : ";
	cin >> x.Mau;
}

void Xuat(PHANSO x)
{
	cout << "\nTu : " << x.Tu;
	cout << "\nMau : " << x.Mau;
}

void Nhap(PHANSO a[], int& n)
{
	cout << "Nhap so phan tu: ";
	cin >> n;
	cout << "Nhap cac phan so: \n";
	for (int i = 0;i < n;i++)
	{
		cout << "Nhap phan so thu " << i + 1 << " :\n";
		Nhap(a[i]);
	}

}