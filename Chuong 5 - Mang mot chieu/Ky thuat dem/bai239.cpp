#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
int demPhanBiet(int a[],int n);
int kiemTraNguyenTo(int x);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	cout<<"So luong so NT phan biet: "<<demPhanBiet(Array,nSize)<<endl;
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
int kiemTraNguyenTo(int x)
{
	int dem = 0;
	for(int i = 1; i <=x; i++)
	{
		if(x%i==0)
		{
			dem++;
		}
	}
	if(dem==2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int demPhanBiet(int a[],int n)
{
	int b[1000];
	int dem = 0;
	int dem1 = 0;
	for(int i = 0; i < n; i++)
	{
		if(kiemTraNguyenTo(a[i])==1)
		{
			b[dem] = a[i];
			dem++;
		}
	}
	for(int i = 0; i < dem; i++)
	{
		for(int j = 0; j < dem; j++)
		{
			if(b[i] == b[j] && i == j)
			{
				dem1++;
			}
			else if(b[i] == b[j] && i!= j)
			{
				break;
			}
		}
	}
	return dem1;
}