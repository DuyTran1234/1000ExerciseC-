#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void xoaLonNhat(int a[],int &n);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	xoaLonNhat(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
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
void xoaLonNhat(int a[],int &n)
{
    int dem = 0;
    for(int i = 1; i < n - 1; i++)
    {
        if(a[i] > a[i+1] && a[i]>a[i-1])
        {
            int index = i;
            dem++;
            for(int j = index; j < n; j++)
            {
                a[j] = a[j+1];
            }
        }
    }
    n = n - dem;
}

