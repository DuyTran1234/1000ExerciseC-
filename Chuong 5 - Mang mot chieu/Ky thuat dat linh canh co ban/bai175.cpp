#include <iostream>
#include <cmath>
using namespace std;
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void haiGiaTriGanNhat(int a[],int n);
int main()
{
	int Array[100];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	haiGiaTriGanNhat(Array,nSize);
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
void haiGiaTriGanNhat(int a[],int n)
{
	int m = 0;
	int p = 0;
	int min = fabs (a[1] - a[0]);
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(a[i] != a[j])
			{
				if( fabs(a[i] - a[j] ) <= min )
				{
					m = a[i];
					p = a[j];
				}
			}
		}
	}
	cout<<"2 gia tri gan nhau nhat trong mang: "<<m<<" va "<<p<<endl;
}