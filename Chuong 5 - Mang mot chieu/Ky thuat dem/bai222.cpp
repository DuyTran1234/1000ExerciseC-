#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
int demCucTri(int a[],int n);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	cout<<"So cuc tri "<<demCucTri(Array,nSize)<<endl;
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
int demCucTri(int a[],int n)
{
	int dem = 0;
	for(int i = 1; i < n-1; i++)
	{
		if( (a[i] > a[i-1] && a[i] > a[i+1] ) || ( a[i] < a[i-1] && a[i] <a[i+1] ))
		{
			dem++;
		}
	}
	return dem;
}