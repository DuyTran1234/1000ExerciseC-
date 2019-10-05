#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void chiaHetCho3(int a[],int n);
void hoanVi(int &x, int &y);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	cout<<endl;
	chiaHetCho3(Array,nSize);
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
void chiaHetCho3(int a[],int n)
{
    int dem = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i]%3 == 0)
        {
            hoanVi(a[i],a[dem]);
            dem++;
        }
    }

}
void hoanVi(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
