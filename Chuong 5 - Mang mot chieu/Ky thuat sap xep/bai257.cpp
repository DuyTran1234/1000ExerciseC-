#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void hoanVi(int &x, int &y);
void sapXepLeTang(int a[],int n);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	sapXepLeTang(Array,nSize);
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
void sapXepLeTang(int a[],int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		if( i % 2 != 0)
		{
			for(int j = i + 1; j < n; j++ )
			{
				if(j%2 != 0)
				{
					if( a[i] > a[j] )
					{
						hoanVi(a[i],a[j]);
					}
				
				}
			}
		}
	}
}
void hoanVi(int &x, int &y)
{
	int temp = 0;
	temp = x;
	x = y;
	y = temp;
}