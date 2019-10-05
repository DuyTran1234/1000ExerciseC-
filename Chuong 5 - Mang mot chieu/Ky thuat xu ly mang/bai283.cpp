#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void hoanVi(int &x ,int &y);
void daoMang(int a[],int n);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	cout<<endl;
	daoMang(Array,nSize);

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
void daoMang(int a[],int n)
{
    int dem = 0;
    for(int i = 0 ; i < n/2; i++)
    {
        hoanVi(a[i],a[n-1-i]);
    }
    for(int i = 0; i < n; i++)
    {
        cout<<"a["<<i<<"] = "<<a[i]<<endl;
    }
}
void hoanVi(int &x ,int &y)
{
    int temp = 0;
    temp = x;
    x = y;
    y = temp;
}
