#include <iostream>
using namespace std;
void xuatHonSo(struct honSo a);
void nhapHonSo(struct honSo &a);
struct honSo
{
	int tuSo;
	int mauSo;
};
int main()
{
	struct honSo dcm;
	nhapHonSo(dcm);
	xuatHonSo(dcm);
}
void nhapHonSo(struct honSo &a)
{
	cout<<"Nhap tu so: ";
	cin>>a.tuSo;
	cout<<"Nhap mau so: ";
	cin>>a.mauSo;
}
void xuatHonSo(struct honSo a)
{
	int nMem = a.tuSo % a.mauSo;
	cout<<"Hon so: "<<endl;
	cout<<nMem<<" "<<a.tuSo - nMem * a.mauSo<<"/"<<a.mauSo<<endl;
}