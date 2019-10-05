#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void nhapMang(int a[], int &n);
void xuatMang(int a[],int n);
int kiemTra(int a[],int n);

int main()
{
	int Array[1000];
	int nSize;
	nhapMang(Array,nSize);
	xuatMang(Array,nSize);
	if( kiemTra(Array,nSize)== 1 )
	{
		cout<<"Ton tai phan tu thoa man yeu cau de bai"<<endl;
	}
	else 
	{
		cout<<"Khong co phan tu thoa man"<<endl;
	}
}
void nhapMang(int a[], int &n)
{
	cout<<"Nhap so luong phan tu: ";
	cin>>n;
	srand(time(NULL));
	for(int i = 0; i < n; i++)
	{
		a[i] = rand()%5000 + 1;
	}
	
}
void xuatMang(int a[],int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<"a["<<i<<"] = "<<a[i]<<endl;
	}
}
int kiemTra(int a[],int n)
{
	int KT = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i]%2==0 && a[i] < 2004 )
		{
			KT = 1;
		}
	}
	if(KT == 1)
	{
		return 1;
	}
}