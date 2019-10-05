#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void taoMangLe(int a[],int b[],int n,int &dem);
int main()
{
	int Array[MAX];
	int mArray[MAX];
	int nSize;
	int mSize = 0;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	taoMangLe(Array,mArray,nSize,mSize);
	cout<<endl;
	xuatMang(mArray,mSize);
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
void taoMangLe(int a[],int b[],int n,int &dem)
{
    dem = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 != 0)
        {
            b[dem] = a[i];
            dem++;
        }
    }
}
