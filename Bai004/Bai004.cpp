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

int main()
{
	SOPHUC a;
	Nhap(a);

	cout << "\nSo phuc vua nhap: ";
	Xuat(a);

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(SOPHUC& x)
{
	cout << "\nNhap phan thuc: ";
	cin >> x.Thuc;
	cout << "Nhap phan ao: ";
	cin >> x.Ao;
}

void Xuat(SOPHUC x)
{
	cout << "\nPhan thuc: " << x.Thuc << endl;
	cout << "Phan ao: " << x.Ao << endl;
}