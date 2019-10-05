#include <iostream>
using namespace std;
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void xoaViTri(int a[], int &n);
int main()
{
	int nSize;
	int Array[1000];
	nhapMang(Array, nSize);
	cout << endl;
	xuatMang(Array,nSize);
	xoaViTri(Array, nSize);
	cout << endl;
	xuatMang(Array, nSize);
}
void nhapMang(int a[], int &n)
{
	cout << "Nhap so luong phan tu mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}
void xuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = " << a[i] << endl;
	}
}
void xoaViTri(int a[], int &n)
{
	int index = 0;
	cout << "Nhap vi tri can xoa: ";
	cin >> index;
	for (int i = index; i < n; i++)
	{
		a[i] = a[i + 1];
	}
	n--;

}
