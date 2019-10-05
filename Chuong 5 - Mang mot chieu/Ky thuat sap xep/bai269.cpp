#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void hoanVi(int &x,int &y);
void sapXepTangDan(int a[],int n);
void themPhanTu(int a[],int &n);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	themPhanTu(Array,nSize);
	sapXepTangDan(Array,nSize);
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
void themPhanTu(int a[],int &n)
{
	int index;
	int x;
	cout<<"Nhap vi tri can them: ";
	cin>>index;
	cout<<"Nhap gia tri can them: ";
	cin>>x;
	n++;
	for(int i = n; i > index; i--)
	{
		a[i] = a[i-1];	
	}
	a[index] = x;
}
void sapXepTangDan(int a[],int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(a[i] > a[j])
			{
				hoanVi(a[i],a[j]);
			}
		}
	}
}
void hoanVi(int &x,int &y)
{
	int temp = x;
	x = y;
	y = temp;
}