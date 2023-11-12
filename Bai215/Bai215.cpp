#include <iostream>
using namespace std;

struct Ngay
{
	int Ngay;
	int Thang;
	int Nam;
};
typedef struct Ngay NGAY;

void Nhap(NGAY&);
void Xuat(NGAY);

void Nhap(NGAY[], int&);
void Xuat(NGAY[], int);

int main()
{
	NGAY b[100];
	int k;
	Nhap(b, k);

	cout << "\nMang cac ngay: ";
	Xuat(b, k);

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(NGAY& x)
{
	cout << "Nhap ngay: ";
	cin >> x.Ngay;
	cout << "Nhap thang: ";
	cin >> x.Thang;
	cout << "Nhap nam: ";
	cin >> x.Nam;
}

void Xuat(NGAY x)
{
	cout << "\nNgay: " << x.Ngay;
	cout << "\nThang: " << x.Thang;
	cout << "\nNam: " << x.Nam;
}

void Nhap(NGAY a[], int& n)
{
	cout << "Nhap so ngay: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap ngay thu "<<i+1<<" :\n";
		Nhap(a[i]);
	}
}

void Xuat(NGAY a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nNgay thu "<<i+1<<" :";
		Xuat(a[i]);
		cout << endl;
	}
}