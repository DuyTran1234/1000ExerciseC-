#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void sapXepLe(int a[],int n);
void hoanVi(int &x, int &y);
void sapXepChan(int a[],int n);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	sapXepChan(Array,nSize);
	sapXepLe(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
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
void sapXepChan(int a[],int n)
{
	for(int i = 0; i < n-1; i++)
	{
		if(a[i] > 0 )
		{
			for(int j = i + 1; j < n; j++)
			{
				if(a[i] > 0)
				{
					if(a[j] < a[i] )
					{
						hoanVi(a[j],a[i]);
					}
				}
			}	
		}
	}
}
void hoanVi(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}
void sapXepLe(int a[],int n)
{
	for(int i = 0; i < n-1; i++)
	{
		if(a[i] < 0)
		{
			for(int j = i + 1; j < n; j++)
			{
				if(a[i] < 0)
				{
					if(a[j] > a[i] )
					{
						hoanVi(a[j],a[i]);
					}
				}
			}	
		}
	}
}