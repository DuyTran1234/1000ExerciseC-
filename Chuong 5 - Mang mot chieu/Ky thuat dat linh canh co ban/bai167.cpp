#include <iostream>
using namespace std;
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
int chuSoToanLeLonNhat(int a[],int n);
int kiemTraChuSoLe(int n);
int viTriSoToanLeDauTien(int a[],int n);
int main()
{
	int Array[100];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	cout<<"Gia tri thoa man ycdb: "<<chuSoToanLeLonNhat(Array,nSize)<<endl;
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
int kiemTraChuSoLe(int n)
{
	int nCopy = n;
	int dem1 = 0;
	int dem2 = 0;
	int soTach;
	while(n != 0)
	{
		soTach = n % 10;
		if(soTach % 2 != 0)
		{
			dem1++;
		}
		dem2++;
		n = n / 10;
	}
	if(dem1 == dem2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int viTriSoToanLeDauTien(int a[],int n)
{
	int m;
	for(int i = 0; i < n; i++)
	{
		if(kiemTraChuSoLe(a[i])==1)
		{
			m = i;
			break;
		}
	}
	return m;
}
int chuSoToanLeLonNhat(int a[],int n)
{
	int index = viTriSoToanLeDauTien(a,n);
	int dem = 0;
	int max = a[index];
	for(int i = index; i < n; i++)
	{
		if(kiemTraChuSoLe(a[i])==1)
		{
			dem++;
			if(a[i] > max )
			{
				max = a[i];
			}
		}
	}
	if(dem != 0)
	{
		return max;
	}
	else 
	{
		return 0;
	}
}