#include <iostream>
#include <cmath>
using namespace std;
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void triTuyetDoi(int a[],int n);
int main()
{
	int Array[100];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	triTuyetDoi(Array,nSize);
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
void triTuyetDoi(int a[],int n)
{
	cout<<"Nhung gia tri lon hon tri tuyet doi dung ngay sau no: "<<endl;
	for(int i = 0; i < n; i++)
	{
		if( a[i] > fabs(a[i+1]) )
		{
			cout<<a[i]<<" ";
		}
	}	
	cout<<endl;
}