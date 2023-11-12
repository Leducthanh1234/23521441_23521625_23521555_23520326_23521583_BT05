#include <iostream>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(DIEM[], int&);
void Xuat(DIEM[], int);

bool ktTrung(DIEM, DIEM);
int TanSuat(DIEM[], int, DIEM);
int DemDiem(DIEM[], int);

int main()
{
	DIEM a[100];
	int n;
	cout << "Nhap cac diem trong mang:\n";
	Nhap(a,n);

	cout << "\nCac diem trong mang:\n";
	Xuat(a, n);

	cout << "So luong phan tu khong trung voi phan tu khac la: " << DemDiem(a, n);

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "\nNhap hoanh do: ";
	cin >> P.x;
	cout << "Nhap tung do: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << "\nHoanh do: " << P.x;
	cout << "\nTung do: " << P.y;
	cout << "\n(" << P.x << "," << P.y << ")";
}

void Nhap(DIEM a[], int& n)
{
	cout << "Nhap n la: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}

void Xuat(DIEM a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Diem thu " << i + 1 << ":";
		Xuat(a[i]);
		cout << endl;
	}
}

bool ktTrung(DIEM P, DIEM Q)
{
	int flag = true;
	if ((P.x==Q.x)&&(P.y==Q.y))
		flag = false;
	return flag;
}

int TanSuat(DIEM a[], int n, DIEM P)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (ktTrung(a[i], P) == true)
			dem++;
	}
	return dem;
}

int DemDiem(DIEM a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (TanSuat(a, n, a[i]) == 1)
			dem++;
	}
	return dem;
}