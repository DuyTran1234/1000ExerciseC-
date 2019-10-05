#include <iostream>
using namespace std;
void nhapMang(int a[], int &n);
void xuatMang(int a[],int n);
int timViTriPhanTuDuongDauTien(int a[],int n);
int gtDuongNhoNhat(int a[],int n);

int main()
{
	int Array[1000];
	int nSize;
	nhapMang(Array,nSize);
	xuatMang(Array,nSize);
	cout<<"Gia tri phan tu duong be nhat: "<<gtDuongNhoNhat(Array,nSize)<<endl;
}
void nhapMang(int a[], int &n)
{
	cout<<"Nhap so luong phan tu: ";
	cin>>n;
	
	for(int i = 0; i < n; i++)
	{
		cout<<"Nhap a["<<i<<"]: ";
		cin>>a[i];
	}
	
}
void xuatMang(int a[],int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<"a["<<i<<"] = "<<a[i]<<endl;
	}
}
int timViTriPhanTuDuongDauTien(int a[],int n)
{
	int index = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] > 0)
		{
			index = i;
			break;
		}
	}
	if( index != 0)
	{
		return index;
	}
}
int gtDuongNhoNhat(int a[],int n)
{
	int index = timViTriPhanTuDuongDauTien(a,n);
	int min = a[index];
	int dem = 0;
	int kt = 0;
	for(int i = index ; i < n; i++ )
	{
		if(a[i] > 0 )
		{
			if(a[i] <= min )
			{
				min = a[i];
				dem++;
			}
		}
	}
	if(dem != 0)
	{
		return min;
	}
	else
	{
		return -1;
	}
}