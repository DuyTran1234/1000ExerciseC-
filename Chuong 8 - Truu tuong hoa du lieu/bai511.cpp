#include <iostream>
using namespace std;
int UCLN(int a, int b);
bool rutGon(struct phanSo a);
void nhap(struct phanSo &a);
struct phanSo
{
	int tuSo;
	int mauSo;
};
int main()
{
	phanSo dcm;
	nhap(dcm);
	cout<<rutGon(dcm)<<endl;
}
void nhap(struct phanSo &a)
{
	cout<<"Nhap tu so: ";
	cin>>a.tuSo;
	cout<<"Nhap mau so: ";
	cin>>a.mauSo;
}
bool rutGon(struct phanSo a)
{
	if(UCLN(a.tuSo,a.mauSo) == 1)
	{
		return true;
	}
	else
	{
		return false;
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
	int tmp = 0;
	while(b != 0)
	{
		tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}