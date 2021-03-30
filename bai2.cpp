
//Bài 2: Cho 1 dãy số nguyên.Viết chương trình thêm phần tử 0 vào trước các số hoàn thiện
#include<iostream>
using namespace std;
#define MAX 100
void nhap(int a[], int n);
void xuat(int a[], int n);
bool so_hoan_thien(int n);
void them(int a[], int& n, int vt);
void them_so_hoan_thien(int a[], int& n);
int main() {

	int a[MAX];
	int n;
	do
	{
		cout << " nhap so luong phan tu mang ";
		cin >> n;
	} while (n <= 0 || n > MAX);
	nhap(a, n);
	xuat(a, n);
	them_so_hoan_thien(a, n);
	cout << " MANG SAU KHI THEM "<<endl;
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
bool so_hoan_thien(int n) {
	int tong = 0;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			tong = tong + i;
		}
	}
	if (tong == n) {
		return true;
	}
	else {
		return false;
	}
}
void them(int a[], int& n, int vt) {
	for (int i = n; i > vt; i--)
	{
		a[i] = a[i - 1];
	}
	a[vt] = 0;
	++n;
}
void them_so_hoan_thien(int a[], int& n) {
	for (int i = 0; i < n; i++)
	{
		if (so_hoan_thien(a[i]) == true)
		{
			them(a, n, i);
			i++;
		}
	}
}