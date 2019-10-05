#include <iostream>
using namespace std;
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
int kiemTra5k(int n);
int so5kDauTien(int a[], int n);
int so5kLonNhat(int a[],int n);
int main()
{
	int Array[100];
	int nSize;
	nhapMang(Array,nSize);
	xuatMang(Array,nSize);
	cout<<"So dang 5^k lon nhat: "<<so5kLonNhat(Array,nSize)<<endl;
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
int kiemTra5k(int n)
{
	int S = 1;
	int m;
	int dem = 0;
	for(int i = 1; i <= n; i++)
	{
		S = 5*S;
		if(S == n)
		{
			dem = 1;
			break;
		}
	}
	if(dem != 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int so5kDauTien(int a[], int n)
{
	int m;
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		if(kiemTra5k(a[i])==1)
		{
			m = i;
			dem++;
			break;
		}
	}
	if(dem!=0)
	{
		return m;
	}
	else
	{
		return 0;
	}
}
int so5kLonNhat(int a[],int n)
{
	int dem = 0;
	int m;
	int index = so5kDauTien(a,n);
	int max = a[index];
	for(int i = index; i < n; i++)
	{
		if(kiemTra5k(a[i])==1)
		{
			dem++;
			if(a[i] > max )
			{
				max  = a[i];
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