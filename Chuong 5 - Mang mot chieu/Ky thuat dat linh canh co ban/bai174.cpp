#include <iostream>
using namespace std;
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void cacCapAB(int a[],int n);
int main()
{
	int Array[100];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	cout<<"Cac cap (a,b) thoa man: "<<endl;
	cacCapAB(Array,nSize);
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
void cacCapAB(int a[],int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(a[i] <= a[j])
			{
				cout<<"("<<a[i]<<","<<a[j]<<")"<<endl;
			}
		}
	}
}