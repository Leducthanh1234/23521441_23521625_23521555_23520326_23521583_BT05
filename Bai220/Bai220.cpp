#include <iostream>
#include <iomanip>
using namespace std;

struct Diem
{
	float x;
	float y;
	float z;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(DIEM[][100], int&, int&);
void Xuat(DIEM[][100], int, int);

int ktThuoc3(DIEM);
int DemThuoc3(DIEM[][100], int, int);


int main()
{
	DIEM b[100][100];
	int k, l;
	cout << "Nhap toa do diem:\n";
	Nhap(b, k, l);

	cout << "Cac diem vua nhap:\n";
	Xuat(b, k, l);

	cout << "Cac diem thuoc goc phan tu thu 3:\n" << DemThuoc3(b, k, l);

	cout << "\n\nKet thuc!!!";
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << "\nx: " << P.x;
	cout << "\ny: " << P.y;
}

void Nhap(DIEM a[][100], int& m, int& n)
{
	cout << "Nhap m : ";
	cin >> m;
	cout << "Nhap n : ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]:\n";
			Nhap(a[i][j]);
		}
}

void Xuat(DIEM a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << fixed << setw(10) << setprecision(2);
			Xuat(a[i][j]);
		}
		cout << endl;
	}
}

int ktThuoc3(DIEM P)
{
	if (P.x < 0 && P.y < 0)
		return 1;
	return 0;
}

int DemThuoc3(DIEM a[][100], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktThuoc3(a[i][j]))
				dem++;
	return dem;
}