#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void sapXepDuong(int a[],int n);
void hoanVi(int &x,int &y);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	cout<<endl;
	sapXepDuong(Array,nSize);
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
void sapXepDuong(int a[],int n)
{
	for(int i = 0; i < n- 1; i++)
	{
		if(a[i] >= 0)
		{
			for(int j = i + 1; j < n; j++)
			{
				if(a[j] >= 0)
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
	int temp = 0;
	temp = x;
	x = y;
	y = temp;
}