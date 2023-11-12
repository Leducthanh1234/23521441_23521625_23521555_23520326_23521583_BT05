#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(DIEM[], int&);
void Xuat(DIEM[], int);

int DemDiem(DIEM[], int);

int main()
{
	DIEM b[100];
	int k;

	cout << "\nNhap mang: " << endl;
	Nhap(b, k);

	cout << "\nMang da nhap: " << endl;
	Xuat(b, k);
	
	cout << "\nSo diem co hoanh do duong trong mang: " << DemDiem(b, k);
	cout << "\n\n\nKet thuc !!!";
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "\nNhap y: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << "\nx: " << P.x;
	cout << "\ny: " << P.y;
}

void Nhap(DIEM a[], int& n)
{
	cout << "\nNhap so luong diem: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap diem thu " << i + 1 << " : " << endl;
		Nhap(a[i]);
	}
}

void Xuat(DIEM a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nDiem thu " << i + 1;
		Xuat(a[i]);
	}
}

int DemDiem(DIEM a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i].x > 0)
			dem++;
	return dem;
}