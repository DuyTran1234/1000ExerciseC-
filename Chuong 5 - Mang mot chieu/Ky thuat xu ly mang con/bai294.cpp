#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void conLonHonHai(int a[],int n);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	cout<<endl;
	conLonHonHai(Array,nSize);
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
void conLonHonHai(int a[],int n)
{
    cout<<"Cac mang con do dai lon hon 2: "<<endl;
    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < i + 1; j++)
        {
            cout<<"a["<<j<<"] = "<<a[j]<<endl;
        }
        cout<<endl;
    }
}
