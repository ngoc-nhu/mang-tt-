
//Bài 1: Cho 1 dãy số nguyên.Viết chương trình xóa các phần tử là số đối xứng.
#include<iostream>
using namespace std;
#define MAX 100
void nhap(int a[], int n);
void xuat(int a[], int n);
int so_dao(int n);
bool kt_so_doi_xung(int n);
void xoa(int a[], int& n, int vt);
void xoa_so_dx(int a[], int& n);
int main()
{
	int a[MAX];
	int n;
	do
	{
		cout << " nhap so luong phan tu mang ";
		cin >> n;
	} while (n <= 0 || n > MAX);
	nhap(a, n);
	xuat(a, n);
	cout << " MANG SAU KHI XOA " << endl;
	xoa_so_dx(a, n);
	xuat(a, n);
}

void nhap(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << " nhap phan tu thu a[" << i << "]=";
		cin >> a[i];
	}
}
void xuat(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << " phan tu thu " << i << " = ";
		cout << a[i] << endl;
	}
}
int so_dao(int n) {
	int tam = 0;
	while (n != 0) {
		int du;
		du = n % 10;
		tam = (tam * 10) + du;
		n = n / 10;
	}
	return tam;
}
bool kt_so_doi_xung(int n) {
	int sodao = so_dao(n);
	if (sodao == n) {
		return true;
	}
	else {
		return false;
	}
}
void xoa(int a[], int& n, int vt)
{
	for (int i = vt; i < n - 1; i++)
	{
		a[i] = a[i + 1];
	}
	--n;
}
void xoa_so_dx(int a[], int& n)
{
	for (int i = 0; i < n; i++)
	{
		if (kt_so_doi_xung(a[i]))
		{
			cout << a[i] << endl;
			xoa(a, n, i);
			--i;
		}
	}
}
