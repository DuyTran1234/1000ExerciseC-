#include <iostream>
using namespace std;
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
int soChanNhoNhat(int a[],int n);
int soChanDauTien(int a[],int n);
int main()
{
	int Array[1000];
	int nSize;
	nhapMang(Array,nSize);
	xuatMang(Array,nSize);
	cout<<"So chan nho nhat: "<<soChanNhoNhat(Array,nSize)<<endl;
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
int soChanDauTien(int a[],int n)
{
	int m;
	for(int i = 0; i < n; i++)
	{
		if(a[i] % 2 == 0)
		{
			m = i;
			break;
		}
	}
	return m;
}
int soChanNhoNhat(int a[],int n)
{
	int index = soChanDauTien(a,n);
	int min = a[index];
	int dem = 0;
	for(int i = index; i < n; i++)
	{
		if(a[i] % 2 == 0 )
		{
			dem++;
			if(a[i] < min)
			{
				min = a[i];
			}
		}
	}
	if(dem != 0)
	{
		return min;
	}
	else
	{
		return 0;
	}
}