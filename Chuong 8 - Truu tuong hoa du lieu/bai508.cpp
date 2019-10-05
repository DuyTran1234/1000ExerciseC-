#include <iostream>
using namespace std;
void tongHaiPhanSo(struct phanSo a, struct phanSo b);
int UCLN(int a, int b);
void nhap(struct phanSo &a);
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
	tongHaiPhanSo(dcm1,dcm2);
}
void nhap(struct phanSo &a)
{
	cout<<"Nhap tu so: ";
	cin>>a.tuSo;
	cout<<"Nhap mau so: ";
	cin>>a.mauSo;
}
int UCLN(int a, int b)
{
	if(a < b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	int tmp = 0;
	while(b != 0)
	{
		tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}
void tongHaiPhanSo(struct phanSo a, struct phanSo b)
{
	int bcnn = (a.mauSo * b.mauSo)/UCLN(a.mauSo,b.mauSo);
	int x = a.tuSo * bcnn/a.mauSo - b.tuSo * bcnn/b.mauSo;
	cout<<x<<"/"<<bcnn<<endl;
}