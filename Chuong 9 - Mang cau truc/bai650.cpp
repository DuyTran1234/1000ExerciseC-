#include <iostream>
using namespace std;
void nhap(struct SOPHUC a[], int &n);
void xuat(struct SOPHUC a[], int n);
void hoanVi(struct SOPHUC &a, struct SOPHUC &b);
void sapXepSoPhuc(struct SOPHUC a[], int n);
struct SOPHUC
{
	int a;
	int b;
};
int main()
{	
	SOPHUC dcm[1000];
	int mSize;
	nhap(dcm,mSize);
	sapXepSoPhuc(dcm,mSize);
	xuat(dcm,mSize);
}
void nhap(struct SOPHUC a[], int &n)
{
	cout<<"Nhap so luong so phuc can nhap: ";
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		cout<<"Nhap so thuc "<<i<<": "<<endl;
		cout<<"Phan thuc: ";
		cin>>a[i].a;
		cout<<"Phan ao: ";
		cin>>a[i].b;
	}
}
void xuat(struct SOPHUC a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<a[i].a<<" + "<<a[i].b<<"i"<<endl;
	}
}
void sapXepSoPhuc(struct SOPHUC a[], int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(a[i].b > a[j].b)
			{
				hoanVi(a[i],a[j]);
			}
		}
	}
}
void hoanVi(struct SOPHUC &a, struct SOPHUC &b)
{
	SOPHUC temp = a;
	a = b;
	b = temp;
}