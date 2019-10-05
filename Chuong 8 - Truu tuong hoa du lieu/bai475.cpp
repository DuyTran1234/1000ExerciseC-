#include <iostream>
using namespace std;
void nhapPhanSo(struct phanSo &a);
void xuatPhanSo(struct phanSo a);
struct phanSo
{
	int tuSo;
	int mauSo;
};

int main()
{
	struct phanSo dcm;
	nhapPhanSo(dcm);
	xuatPhanSo(dcm);
}
void nhapPhanSo(struct phanSo &a)
{
	cout<<"Nhap tu so: ";
	cin>>a.tuSo;
	do
	{
		cout<<"Nhap mau so: ";
		cin>>a.mauSo;
	}while(a.mauSo == 0);
}
void xuatPhanSo(struct phanSo a)
{
	cout<<"Phan so da nhap: "<<endl;
	cout<<a.tuSo<<"/"<<a.mauSo<<endl;
}