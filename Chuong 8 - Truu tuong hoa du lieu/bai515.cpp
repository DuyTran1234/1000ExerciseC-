#include <iostream>
using namespace std;
int soSanh(struct phanSo a, struct phanSo b);
void nhap(struct phanSo &a);
int UCLN(int a, int b);
struct phanSo
{
	int tuSo;
	int mauSo;
};
int main()
{
	phanSo dcm1;
	phanSo dcm2;
	nhap(dcm1);
	nhap(dcm2);
	cout<<soSanh(dcm1,dcm2)<<endl;
}
void nhap(struct phanSo &a)
{
	cout<<"Nhap tu so: ";
	cin>>a.tuSo;
	cout<<"Nhap mau so: ";
	cin>>a.mauSo;
}
int soSanh(struct phanSo a, struct phanSo b)
{
	int bcnn = a.mauSo * b.mauSo / UCLN(a.mauSo, b.mauSo);
	int x = a.tuSo * bcnn / a.mauSo;
	int y = b.tuSo* bcnn / b.mauSo;
	if(x > y)
	{
		return 1;
	}
	else if(x < y)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}
int UCLN(int a, int b)
{
	if(a < b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	int tmp;
	while(b != 0)
	{
		tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}