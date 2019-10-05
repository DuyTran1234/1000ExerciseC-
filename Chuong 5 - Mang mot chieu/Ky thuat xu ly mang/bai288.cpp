#include <iostream>
#include <windows.h>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void xuatChanLe(int a[],int n);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	cout<<endl;
	xuatChanLe(Array,nSize);
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
void xuatChanLe(int a[],int n)
{
    HANDLE hConsoleColor;
    hConsoleColor = GetStdHandle(STD_OUTPUT_HANDLE);
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            SetConsoleTextAttribute(hConsoleColor, 14);
            cout<<"a["<<i<<"] = "<<a[i]<<endl;;
        }
        else
        {
            SetConsoleTextAttribute(hConsoleColor, 15);
            cout<<"a["<<i<<"] = "<<a[i]<<endl;
        }
    }
}
