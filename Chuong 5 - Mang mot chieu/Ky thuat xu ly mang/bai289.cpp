#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void chanLeHaiHang(int a[],int n);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	cout<<endl;
	chanLeHaiHang(Array,nSize);
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
void chanLeHaiHang(int a[],int n)
{
    cout<<"So chan: ";
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            cout<<a[i]<<"  ";
        }
    }
    cout<<endl;
    cout<<"So le: ";
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 != 0)
        {
            cout<<a[i]<<"  ";
        }
    }

}
