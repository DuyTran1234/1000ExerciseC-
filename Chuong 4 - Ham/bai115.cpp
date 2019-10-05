#include <iostream>
#include <string>
using namespace std;
void DiemHocSinh();
int main()
{
	DiemHocSinh();
}
void DiemHocSinh()
{
	string nName;
	double nToan;
	double nVan;
	cout<<"Nhap ho va ten: ";
	getline(cin, nName);
	cout<<"Nhap diem toan: ";
	cin>>nToan;
	cout<<"Nhap diem van: ";
	cin>>nVan;
	cout<<"Diem TB cua "<<nName<<" la: "<<(nToan+nVan)/2<<endl;
}