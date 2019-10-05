#include <iostream>
using namespace std;
void nhap(struct daThuc a[], int &n);
void tichDaThuc(struct daThuc a[], struct daThuc b[], int m, int n);

struct daThuc
{
	int a;
	int n;
};
int main()
{
	daThuc dcm1[1000];
	daThuc dcm2[1000];
	int mSize;
	int nSize;
	nhap(dcm1,mSize);
	nhap(dcm2,nSize);
	tichDaThuc(dcm1,dcm2,mSize,nSize);
}
void nhap(struct daThuc a[], int &n)
{
	cout<<"Nhap so luong don thuc trong da thuc: ";
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		cout<<"Nhap he so don thuc "<<i+1<<": ";
		cin>>a[i].a;
		cout<<"Nhap so mu he so "<<i+1<<": ";
		cin>>a[i].n;
	}
}
void tichDaThuc(struct daThuc a[], struct daThuc b[], int m, int n)
{
	daThuc c[1000] = {0};
	daThuc d[1000] = {0};
	int dem = 0;
	int count = 0;
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			c[dem].a =  a[i].a * b[j].a;
			c[dem].n = a[i].n + b[j].n;
			dem++;
		}
	}
	for(int i = 0; i < dem; i++)
	{
		for(int j = 0; j < dem; j++)
		{
			if(c[i].n == c[j].n)
			{
				d[count].a = d[count].a + c[j].a;
				d[count].n = c[i].n;
			}
		}
		count++;
	}
	for(int i = 0; i < count; i++)
	{
		for(int j = 0; j < count; j++)
		{
			if(i == j && d[i].a == d[j].a && d[i].n == d[i].n)
			{
				cout<<d[i].a<<"x^"<<d[i].n<<" + ";
			}
			else if(i != j && d[i].a == d[j].a && d[i].n == d[i].n)
			{
				break;
			}
		}
	}
}