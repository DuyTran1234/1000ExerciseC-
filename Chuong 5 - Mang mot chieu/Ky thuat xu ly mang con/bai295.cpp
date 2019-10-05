#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void lietKeConTang(int a[],int n);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	cout<<endl;
	lietKeConTang(Array,nSize);
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
void lietKeConTang(int a[],int n)
{
    cout<<"Cac mang con tang: "<<endl;
    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            if(a[j] > a[i])
            {
                break;
            }
            else
            {
                cout<<a[j]<<endl;
            }
        }
        cout<<endl;
    }
}
