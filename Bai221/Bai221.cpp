#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct DIEM
{
	float x;
	float y;
};

void Nhap(DIEM&);
void Xuat(DIEM);
int ktTrung(DIEM, DIEM);
int TanSuat(DIEM[][100], int, int, DIEM);

int main()
{
	DIEM A;

	cout << "Nhap toa do diem:";
	Nhap(A);
	cout << "\nToa do diem: ";
	Xuat(A);
	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << "\n x = " << P.x;
	cout << "\n y = " << P.y << endl;
	cout << " P(" << P.x << ", " << P.y << ")";
}

int ktTrung(DIEM P, DIEM Q)
{
	if (P.x == Q.x && P.y == Q.y)
		return 1;
	return 0;
}

int TanSuat(DIEM a[][100], int m, int n, DIEM P)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		if (ktTrung(a[i][j], P))
		dem++;
	return dem;
}