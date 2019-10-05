#include <iostream>
#include <math.h>
using namespace std;
void nhap(struct daThuc a[], int &n);
int giaTri(struct daThuc a[], int n);
struct daThuc
{
	int a;
	int n;
};
int main()
{
	daThuc dcm[1000];
	int mSize;
	nhap(dcm,mSize);
	cout<<"S = "<<giaTri(dcm,mSize)<<endl;
}
void nhap(struct daThuc a[], int &n)
{
	cout<<"Nhap so luong don thuc trong da thuc: ";
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		cout<<"Nhap he so cua don thuc "<<i+1<<": ";
		cin>>a[i].a;
		cout<<"Nhap mu cua don thuc "<<i+1<<": ";
		cin>>a[i].n;
	}
}
int giaTri(struct daThuc a[], int n)
{
	int S = 0;
	int x = 0;
	cout<<"Nhap x = ";
	cin>>x;
	for(int i = 0; i < n; i++)
	{
		S = S + a[i].a*pow(x,a[i].n);
	}
	return S;
}