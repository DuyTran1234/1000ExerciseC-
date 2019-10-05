#include <iostream>
using namespace std;
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
int soChanDau(int a[],int n);
int main()
{
	int Array[1000];
	int nSize;
	nhapMang(Array,nSize);
	xuatMang(Array,nSize);
	cout<<"So chan dau tien: "<<soChanDau(Array,nSize)<<endl;
}
void nhapMang(int a[], int &n)
{
	cout<<"Nhap so luong phan tu cua mang: ";
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
int soChanDau(int a[],int n)
{
	int m = 0;
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i]%2 == 0)
		{
			dem = 1;
			m = a[i];
			break;
		}
	}
	if(dem == 1)
	{
		return m;
	}
	else
	{
		return -1;
	}
}