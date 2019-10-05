#include <iostream>
#include <string>
using namespace std;
void nhap(struct TINH &a);
void xuat(struct TINH a);
struct TINH
{
	short maTinh;
	char tenTinh[30];
	int danSo;
	double dienTich;
};
int main()
{
	TINH QuangNinh;
	nhap(QuangNinh);
	xuat(QuangNinh);
}
void nhap(struct TINH &a)
{
	cout<<"Nhap ma tinh: ";
	cin>>a.maTinh;
	cin.ignore(32767,'\n');
	cout<<"Nhap ten tinh: ";
	cin.getline(a.tenTinh,30);
	cout<<"Nhap tong dan so: ";
	cin>>a.danSo;
	cout<<"Nhap dien tich: ";
	cin>>a.dienTich;
}
void xuat(struct TINH a)
{
	cout<<"Ma tinh: "<<a.maTinh<<endl;
	cout<<"Ten tinh: "<<a.tenTinh<<endl;
	cout<<"Dan so: "<<a.danSo<<endl;
	cout<<"Dien tich: "<<a.dienTich<<endl;
}