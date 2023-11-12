#include <iostream>
using namespace std;

struct HonSo
{
	int Nguyen;
	int Tu;
	int Mau;
};
typedef struct HonSo HONSO;

void Nhap(HONSO&);
void Xuat(HONSO);

int main()
{
	HONSO a;
	Nhap(a);

	cout << "Hon so vua nhap: ";
	Xuat(a);

	cout << "\n\n\nKet thuc !!!";
	return 0;
}

void Nhap(HONSO& x)
{
	cout << "\nNhap phan nguyen: ";
	cin >> x.Nguyen;
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

void Xuat(HONSO x)
{
	cout << "\nPhan nguyen: " << x.Nguyen << endl;
	cout << "Phan tu: " << x.Tu << endl;
	cout << "Phan mau: " << x.Mau << endl;
}