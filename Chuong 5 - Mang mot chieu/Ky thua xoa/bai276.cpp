#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void xoaTrungX(int a[],int n);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	xoaTrungX(Array,nSize);
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
void xoaTrungX(int a[],int n)
{
    int x = 0;
    cout<<"Nhap x: ";
    cin>>x;
    int dem = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] != x)
        {
            a[dem] = a[i];
            dem++;
        }
    }
    for(int i = 0; i < dem; i++)
    {
        cout<<"a["<<i<<"] = "<<a[i]<<endl;
    }
}
