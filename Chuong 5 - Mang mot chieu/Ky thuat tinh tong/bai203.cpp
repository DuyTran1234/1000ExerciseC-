#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
int kiemTraHangChuc(int x);
int tongChuc(int a[],int n);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	cout<<"Tong chuc la 5: "<<tongChuc(Array,nSize)<<endl;
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
int kiemTraHangChuc(int x)
{
	int tachSo = 0;
	int dem = 0;
	while(x!=0)
	{
		tachSo = x%10;
		dem++;
		x = x/10;
		if(dem == 2)
		{
			break;
		}
	}
	if(tachSo == 5)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int tongChuc(int a[],int n)
{
	int S = 0;
	for(int i = 0; i < n; i++)
	{
		if(kiemTraHangChuc(a[i])==1)
		{
			S = S + a[i];
		}
	}
	return S;
}