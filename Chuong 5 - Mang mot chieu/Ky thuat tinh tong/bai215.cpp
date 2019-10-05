#include <iostream>
#include <cmath>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
int khoangCachTrungBinh(int a[],int n);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	cout<<"Khoang cach trung binh cua cac phan tu: "<<khoangCachTrungBinh(Array,nSize)<<endl;
}
void nhapMang(int a[], int &n)
{
	cout<<"Nhap so luong phan tu: ";
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
}
void xuatMang(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<"a["<<i<<"] = "<<a[i]<<endl;
	}
}
int khoangCachTrungBinh(int a[],int n)
{
	double S = 0;
	int dem = 0;
	for(int i = 0; i < n - 1;i++)
	{
		S = S + abs(a[i] - a[+1]);
		dem++;
	}
	int TB = S / static_cast<double>(dem);
	return TB;
}