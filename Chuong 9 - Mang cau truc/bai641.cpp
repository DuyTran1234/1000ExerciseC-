#include <iostream>
using namespace std;
void xuat(struct PHANSO a[], int n);
void nhap(struct PHANSO a[], int &n);
void hoanVi(struct PHANSO &a, struct PHANSO &b);
int UCLN(int x, int y);
int soSanh2PhanSo(struct PHANSO a, struct PHANSO b);
void sapXepGiamDan(struct PHANSO a[], int n);
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
	sapXepGiamDan(dcm,nSize);
	cout<<"Phan so min = "<<dcm[0].x<<"/"<<dcm[0].y<<endl;
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
void sapXepGiamDan(struct PHANSO a[], int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(soSanh2PhanSo(a[i],a[j]) == 1)
			{
				hoanVi(a[i],a[j]);
			}
		}
	}
}
int soSanh2PhanSo(struct PHANSO a, struct PHANSO b)
{
	int bcnn = (a.y * b.y) / UCLN(a.y,b.y);
	if(a.x * bcnn / a.y > b.x * bcnn / b.y)
	{
		return 1;
	}
	else if(a.x * bcnn / a.y < b.x * bcnn / b.y)
	{
		return -1;
	}
	else
	{
		return 0;
	}
	
}
int UCLN(int x, int y)
{
	if(x < y)
	{
		int temp = x;
		x = y;
		y = temp;
	}
	int tmp;
	while(y != 0)
	{
		tmp = x % y;
		x = y;
		y = tmp;
	}
	return x;
}
void hoanVi(struct PHANSO &a, struct PHANSO &b)
{
	PHANSO temp = a;
	a = b;
	b = temp;
}