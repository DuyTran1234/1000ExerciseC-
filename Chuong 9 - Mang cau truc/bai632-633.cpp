#include <iostream>
using namespace std;
void xuat(struct PHANSO a[], int n);
void nhap(struct PHANSO a[], int &n);
struct PHANSO
{
	int x;
	int y;
};
int main()
{
	PHANSO dcm[100];
	int nSize;
	nhap(dcm,nSize);
	xuat(dcm,nSize);
}
void nhap(struct PHANSO a[], int &n)
{
	cout<<"Nhap so luong phan so diem can nhap: ";
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		cout<<"Nhap phan so thu: "<<i<<": "<<endl;
		cout<<"Tu So: ";
		cin>>a[i].x;
		cout<<"Mau So: ";
		cin>>a[i].y;
	}
}
void xuat(struct PHANSO a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<a[i].x<<"/"<<a[i].y<<endl;
	}
}