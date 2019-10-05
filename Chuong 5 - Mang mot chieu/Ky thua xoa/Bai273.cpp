#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void xoaSoAm(int a[],int &n);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	cout<<endl;
	xoaSoAm(Array,nSize);
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
void xoaSoAm(int a[],int &n)
{
    int dem = 0;
    int index = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] > 0)
        {
            a[dem] = a[i];
            dem++;
        }
    }
    for(int i = 0; i < dem ; i++)
    {
        cout<<"a["<<i<<"] = "<<a[i]<<endl;
    }
}
