#include <iostream>
using namespace std;
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void xaGiaTriX(int a[], int n);
int main()
{
	int Array[1000];
	int nSize;
	nhapMang(Array,nSize);
	xuatMang(Array,nSize);
	xaGiaTriX(Array,nSize);
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
void xaGiaTriX(int a[], int n)
{
	int x;
	cout<<"Nhap x: ";
	cin>>x;
	int max = 0;
	int m;
	for(int i = 0; i < n; i++)
	{
		int khoangcach = a[i] - x;
		if( khoangcach > max )
		{
			max = khoangcach;
			m = a[i];
		}
	}
	cout<<"Gia tri xa x nhat: "<<m<<endl;
}