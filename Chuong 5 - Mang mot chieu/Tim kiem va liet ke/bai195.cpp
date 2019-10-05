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
	cout<<"Cac bo 3 so thoa man dieu kien: "<<endl;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(a[i] == a[j])
			{
				continue;
			}
			else
			{
				for(int k = 0; k < n; k++)
				{
					if(a[i] == a[k] || a[j] == a[k])
					{
						continue;
					}
					else
					{
						if(a[i] == a[j] + a[k] )
						{
							cout<<"("<<a[i]<<","<<a[j]<<","<<a[k]<<")"<<endl;
						}
					}
				}
			}
		}
	}
}