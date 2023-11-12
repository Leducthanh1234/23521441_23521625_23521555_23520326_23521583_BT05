#include <iostream>
using namespace std;

struct Diem
{
	int x;
	int y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);

int main()
{
	DIEM A;
	cout << "\nNhap diem A: ";
	Nhap(A);

	cout << "\nDiem A vua nhap: ";
	Xuat(A);

	cout << "\n\n\nKet thuc!!!" << endl;
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
	cout << " (" << P.x << "," << P.y << ")";
}