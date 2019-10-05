#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void hoanVi(int &x, int &y);
void daoChan(int a[],int n);
int demChan(int a[],int n);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	daoChan(Array,nSize);
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
void daoChan(int a[],int n)
{
    int dem = demChan(a,n);
    int dem1 = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            dem1++;
            for(int j = 0; j < n; j++)
            {
                if(a[j] % 2 == 0 && i != j )
                {
                    hoanVi(a[i],a[j]);
                }
            }
            if(dem1 == (dem/2))
            {
                break;
            }
        }
    }
}
void hoanVi(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
int demChan(int a[],int n)
{
    int dem = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i]%2==0)
        {
            dem++;
        }
    }
    return dem;
}
