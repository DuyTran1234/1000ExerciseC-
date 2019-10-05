#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void hoanVi(int &x, int &y);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
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
		if(i >= 1)
		{
			for(int j = 0; j < i; j++)
			{
				for(int k = 0; k < i; k++)
				{
					if(a[k] < a[k+1] )
					{
						hoanVi(a[k],a[k+1]);
					}
				}
			}
		}
	}
}
void xuatMang(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<"a["<<i<<"] = "<<a[i]<<endl;
	}
}
void hoanVi(int &x, int &y)
{
	int temp = x;
	x = y; 
	y = temp;
}