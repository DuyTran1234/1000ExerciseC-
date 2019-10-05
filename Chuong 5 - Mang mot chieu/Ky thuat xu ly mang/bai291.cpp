#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void hoanVi(int &x, int &y);
void bienDoi(int a[],int n);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	bienDoi(Array,nSize);
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
void bienDoi(int a[],int n)
{
    int max = a[0];
    int indexMAX = 0;
    int min = a[0];
    int indexMIN = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] >= max)
        {
            max = a[i];
            indexMAX = i;
        }
        else if(a[i] <= min)
        {
            min = a[i];
            indexMIN = i;
        }
    }
    hoanVi(a[indexMAX],a[indexMIN]);
}
void hoanVi(int &x, int &y)
{
    int temp = 0;
    temp = x;
    x = y;
    y = temp;
}
