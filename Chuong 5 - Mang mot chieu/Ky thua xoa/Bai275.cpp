#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void xoaChinhPhuong(int a[],int &n);
int kiemTraChinhPhuong(int x);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	cout<<endl;
	xoaChinhPhuong(Array,nSize);

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
int kiemTraChinhPhuong(int x)
{
    int kiemTra = 0;
    for(int i = 1; i <= x; i++)
    {
        if(i*i == x)
        {
            kiemTra = 1;
            break;
        }
    }
    if(kiemTra == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void xoaChinhPhuong(int a[],int &n)
{
    int dem = 0;
    for(int i = 0; i < n; i++)
    {
        if(kiemTraChinhPhuong(a[i])!= 1)
        {
            a[dem] = a[i];
            dem++;
        }
    }
    for(int i = 0; i < dem; i++)
    {
        cout<<"a["<<i<<"] = "<<a[i]<<endl;
    }
}
