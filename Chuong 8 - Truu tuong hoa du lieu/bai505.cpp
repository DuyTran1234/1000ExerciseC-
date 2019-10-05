#include <iostream>
#include <math.h>
using namespace std;
void nhap(struct daThuc a[], int &n);
void nghiemDaThuc(struct daThuc Array[], int n);
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
	nghiemDaThuc(dcm,mSize);
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
void nghiemDaThuc(struct daThuc Array[], int n)
{
	int x,y;
	
	cout<<"Nhap a: ";
	cin>>x;
	cout<<"Nhap b: ";
	cin>>y;
	cout<<"Nghiem nguyen trong khoang [a,b] la: "<<endl;
	for(int i = x; i <= y; i++)
	{
		int S = 0;
		for(int j = 0; j < n; j++)
		{
			S = S + Array[j].a * (pow(i,Array[j].n));
		}
		if(S == 0)
		{
			cout<<i<<endl;
		}
	}
}