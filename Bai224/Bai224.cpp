#include <iostream>
#include <cmath>
using namespace std;

struct Diem
{
	int x;
	int y;
};
typedef struct Diem DIEM;

struct DuongTron
{
	DIEM I;
	float R;
};
typedef struct DuongTron DUONGTRON;

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);

void Nhap(DIEM[][100], int&, int&);
void Xuat(DIEM[][100], int, int);

float KhoangCach(DIEM, DIEM);
int ktThuoc(DUONGTRON, DIEM);
int DemDiem(DIEM [][100], int, int, DUONGTRON);

int main()
{
	DIEM b[100][100];
	int k, l;
	Nhap(b, k, l);

	Xuat(b, k, l);

	DUONGTRON c;
	cout << "\nNhap duong tron c:" << endl;
	Nhap(c);

	cout << "\nDuong tron c vua nhap: ";
	Xuat(c);

	cout << "\nSo luong diem trong ma tran nam trong duong tron:" << DemDiem(b, k, l, c);

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Nhap(DUONGTRON& s)
{
	cout << "Nhap tam duong tron: " << endl;
	Nhap(s.I);
	cout << "Nhap ban kinh: ";
	cin >> s.R;
}

void Nhap(DIEM a[][100], int& m, int& n)
{
	cout << "Nhap ma tran cac diem:" << endl;
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap diem a[" << i << "][" << j << "]: " << endl;
			Nhap(a[i][j]);
		}
}

void Xuat(DIEM P)
{
	cout << "\nx: " << P.x;
	cout << "\ny: " << P.y;
}

void Xuat(DUONGTRON s)
{
	cout << "\nTam duong tron: ";
	Xuat(s.I);
	cout << "\nBan kinh: " << s.R;
}

void Xuat(DIEM a[][100], int m, int n)
{
	cout << "Ma tran vua nhap: ";
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "\na[" << i << "][" << j << "]: ";
			Xuat(a[i][j]);
			cout << endl;
		}
}

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt(pow(Q.x - P.x, 2) + pow(Q.y - P.y, 2));
}

int ktThuoc(DUONGTRON s, DIEM P)
{
	float kc = KhoangCach(s.I, P);
	if (kc <= s.R)
		return 1;
	return 0;
}

int DemDiem(DIEM a[][100], int m, int n, DUONGTRON s)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktThuoc(s, a[i][j]))
				dem++;
	return dem;
}