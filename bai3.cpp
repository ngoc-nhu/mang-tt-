#include<iostream>
using namespace std;
#define MAX 100
void nhap(int a[], int n);
void xuat(int a[], int n);
void xoa(int a[], int& n, int vt);
void xoa_so_trung(int a[], int& n);

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
	xoa_so_trung(a, n);
	cout << " MANG SAU KHI XOA " << endl;
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
void xoa(int a[], int& n, int vt) {
	for (int i = vt; i < n - 1; i++) {
		a[i] = a[i + 1];
	}
	n--;
}
void xoa_so_trung(int a[], int& n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] == a[j])
			{
				xoa(a, n, j);
				j--;
			}
		}
	}
}