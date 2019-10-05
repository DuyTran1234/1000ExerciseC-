#include <iostream>
using namespace std;
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
int tichCuaMang(int a[],int n);
int giaTriMax(int a[],int n);
int kiemTraChiaHet(int a[],int n, int x);
int BCNN(int a[],int n);
int main()
{
	int Array[100];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	cout<<"BCNN cua mang: "<<BCNN(Array,nSize)<<endl;
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
int tichCuaMang(int a[],int n)
{
	int S = 1;
	for(int i = 0; i < n; i++)
	{
		S = S * a[i];
	}
	return S;
}
int giaTriMax(int a[],int n)
{
	int max = a[0];
	for(int i = 0; i < n; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
		}
	}
	return max;
}
int kiemTraChiaHet(int a[],int n, int x)
{
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		if(x % a[i] != 0)
		{
			dem++;
		}
	}
	if(dem ==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int BCNN(int a[],int n)
{
	int m;
	int dem = 0;
	for(int x = giaTriMax(a,n); x <= tichCuaMang(a,n); x++ )
	{
		if(kiemTraChiaHet(a,n,x)==1)
		{
			m = x;
			dem++;
			break;
		}
	}
	if(dem != 0)
	{
		return m;
	}
	else
	{
		return -1;
	}
}