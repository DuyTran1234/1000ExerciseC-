#include <iostream>
using namespace std;
void hieuHaiDaThuc(struct daThuc a[], struct daThuc b[], int m, int n);
void nhap(struct daThuc a[], int &n);
struct daThuc
{
	int a;
};
int main()
{
	daThuc dcm1[1000];
	daThuc dcm2[1000];
	int mSize;
	int nSize;
	nhap(dcm1,mSize);
	nhap(dcm2,nSize);
	hieuHaiDaThuc(dcm1,dcm2,mSize,nSize);
}
void nhap(struct daThuc a[], int &n)
{
	cout<<"Nhap so mu cao nhat cua da thuc: ";
	cin>>n;
	for(int i = n; i >= 0; i--)
	{
		cout<<"Nhap he so cua x^"<<i<<": ";
		cin>>a[i].a;		
	}
}
void hieuHaiDaThuc(struct daThuc a[], struct daThuc b[], int m, int n)
{
	int c[1000];
	int dem = m;
	
	for(int i = m; i >= 0; i--)
	{
		for(int j = n; j >= 0; j--)
		{
			if(i == j)
			{
				c[dem] = a[i].a + b[j].a;
				dem--;
			}
			else if(i > n)
			{
				c[dem] = a[i].a;
				dem--;
			}
		}
	}
	cout<<"Tong 2 da thuc: ";
	for(int i = m; i >= 0; i--)
	{
		if(i != 0)
		{
			cout<<c[i]<<"x^"<<i<<" + ";
		}
		else if(i == 1)
		{
			cout<<c[i]<<" + ";
		}
		else
		{
			cout<<c[i];
		}
	}
}