#include <iostream>
using namespace std;
void xuat(struct PHANSO a[], int n);
int duongDau(struct PHANSO a[], int n);
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
	cout<<"Duong dau: "<<dcm[duongDau(dcm,nSize)].x<<"/"<<dcm[duongDau(dcm,nSize)].y<<endl;
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
int duongDau(struct PHANSO a[], int n)
{
	int index = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i].x * a[i].y > 0)
		{
			index = i;
			break;
		}
	}
	return index;
}