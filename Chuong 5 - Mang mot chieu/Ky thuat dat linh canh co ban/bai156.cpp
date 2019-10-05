#include <iostream>
using namespace std;
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void ganGiaTriX(int a[],int n);
int main()
{
	int Array[1000];
	int nSize;
	nhapMang(Array,nSize);
	xuatMang(Array,nSize);
	ganGiaTriX(Array,nSize);
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
void ganGiaTriX(int a[],int n)
{
	int x;
	cout<<"Nhap x: ";
	cin>>x;
	int min = a[0] - x;
	int m = 0;
	for(int i = 0; i < n; i++)
	{
		int khoangcach = a[i] - x;
		if(khoangcach < 0)
		{
			khoangcach = khoangcach*(-1);
		};
		
		if(khoangcach < min)
		{
			khoangcach = min;
			m = a[i];
		}
	}
	cout<<"Gia tri gan x nhat: "<<m<<endl;
}