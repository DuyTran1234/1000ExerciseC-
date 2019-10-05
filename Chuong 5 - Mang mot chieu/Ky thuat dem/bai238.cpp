#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void xuatHienNhieuNhat(int a[],int n);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	xuatHienNhieuNhat(Array,nSize);
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
void xuatHienNhieuNhat(int a[] ,int n)
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
	int max = b[0];
	for(int i = 0; i < n; i++)
	{
		if(b[i] >= max)
		{
			max = b[i];
		}
	}
	cout<<"Nhung gia tri xuat hien nhieu lan nhat: "<<endl;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0 ; j < n; j++)
		{
			if(b[i] == max && a[i]== a[j] && i == j)
			{
				cout<<a[i]<<endl;
			}
			else if(b[i] == max && a[i]== a[j] && i != j)
			{
				break;
			}
		}
	}
}