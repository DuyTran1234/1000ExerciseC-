#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void dichTrai(int a[],int &n);
void hoanVi(int &x,int &y);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	dichTrai(Array,nSize);
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
void dichTrai(int a[],int &n)
{
    int k = 0;
    cout<<"Nhap k: ";
    cin>>k;
    if(k >= n)
    {
        k = k % n;
    }
    for(int i = 0; i < k; i++)
    {
        for(int j = 0; j < n- 1; j++)
        {
            hoanVi(a[j],a[j+1]);
        }
    }
}
void hoanVi(int &x,int &y)
{
    int temp = 0;
    temp = x;
    x = y;
    y = temp;
}
