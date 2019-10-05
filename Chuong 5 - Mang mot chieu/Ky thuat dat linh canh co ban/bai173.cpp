#include <iostream>
using namespace std;
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void demLanXuatHien(int a[],int b[],int n);
int soLanXuatHienItNhat(int b[],int n);
int main()
{
	int Array[1000];
	int mArray[1000] = {0};
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	demLanXuatHien(Array,mArray,nSize);
	cout<<"Gia tri co so lan xuat hien it nhat: "<<endl;
	cout<<Array[soLanXuatHienItNhat(mArray,nSize)]<<endl;
	for(int i = 0; i < nSize; i++)
	{
		if( i == soLanXuatHienItNhat(mArray,nSize))
		{
			continue;
		}
		if(mArray[i] == mArray[soLanXuatHienItNhat(mArray,nSize)])
		{
			cout<<Array[i]<<endl;
		}
	}

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
void demLanXuatHien(int a[],int b[],int n)
{
	
	for(int i = 0; i < n; i++)
	{
		int m = a[i];
		for(int j = 0; j < n; j++)
		{
			if(a[j] == m )
			{
				b[i]++;
			}
		}
	}
}
int soLanXuatHienItNhat(int b[],int n)
{
	int min = b[0];
	int index;
	for(int i = 0; i < n; i++)
	{
		if(b[i] <= min )
		{
			min = b[i];
			index = i;
		}
	}
	return index;
}