#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void taoMang(int a[],int n);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	cout<<endl;
	taoMang(Array,nSize);
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
void taoMang(int a[],int n)
{
    int dem = 0;
    int b[MAX];
    for(int i = 0; i < n; i++)
    {
        if(i == 0 || i == n-1)
        {
            if(i == 0)
            {
                b[i] = a[i] + a[i+1];
            }
            else
            {
                b[i] = a[i] + a[i-1];
            }
        }
        else
        {
            b[i] = a[i-1] + a[i+1];
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout<<"b["<<i<<"] = "<<b[i]<<endl;
    }
}
