#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void xoaTrung(int a[],int n);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	cout<<endl;
	xoaTrung(Array,nSize);
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
void xoaTrung(int a[],int n)
{
    int dem = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a[i] == a[j] && i == j)
            {
                a[dem] = a[i];
                dem++;
            }
            else if(a[i] == a[j] && i != j)
            {
                break;
            }
        }
    }
    for(int i = 0; i < dem; i++)
    {
        cout<<"a["<<i<<"] = "<<a[i]<<endl;
    }
}
