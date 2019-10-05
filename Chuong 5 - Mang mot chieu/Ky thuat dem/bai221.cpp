#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
int tongQuanChanLe(int a[],int n);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	cout<<"Tong quan chan le: "<<tongQuanChanLe(Array,nSize)<<endl;
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
int tongQuanChanLe(int a[],int n)
{
	int dem1 = 0;
	int dem2 = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i]%2==0)
		{
			dem1++;
		}
		else
		{
			dem2++;
		}
	}
	if(dem1==dem2)
	{
		return 0;
	}
	else if(dem1 > dem2)
	{
		return -1;
	}
	else 
	{
		return 1;
	}
}