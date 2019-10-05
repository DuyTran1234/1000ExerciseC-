#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void hoanVi(int &x,int &y);
int kiemTraNguyenTo(int x);
void sapXepNguyenTo(int a[],int n);

int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	sapXepNguyenTo(Array,nSize);
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
int kiemTraNguyenTo(int x)
{
	int dem = 0;
	for(int i = 1; i <= x; i++)
	{
		if(x%i==0)
		{
			dem++;
		}
	}
	if(dem == 2)
	{
		return 1;
	}		
	else 
	{
		return 0;
	}
}
void sapXepNguyenTo(int a[],int n)
{
	for(int i = 0; i < n -1; i++)
	{
		if(kiemTraNguyenTo(a[i])==1)
		{
			for(int j = i + 1; j < n; j++)
			{
				if(kiemTraNguyenTo(a[j])==1)
				{
					if(a[i] > a[j])
					{
						hoanVi(a[i],a[j]);
					}
				}
			}
		}
	}
}
void hoanVi(int &x,int &y)
{
	int temp;
	temp = x;
	x = y; 
	y = temp;
}