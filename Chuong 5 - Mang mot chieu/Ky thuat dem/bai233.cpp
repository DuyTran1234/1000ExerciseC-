#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void lietKe(int a[],int n);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	lietKe(Array,nSize);
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
void lietKe(int a[],int n)
{
	int b[1000] = {0};
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(a[i] == a[j])
			{
				b[i]++;
			}
		}
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(a[i]==a[j] && i==j )
			{
				cout<<"Gia tri "<<a[i]<<" xuat hien "<<b[i]<<" lan"<<endl;
			}
			else if(a[i] == a[j] && i != j)
			{
				break;
			}
		}
	}
}