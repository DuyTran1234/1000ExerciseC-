#include <iostream>
using namespace std;
void nhap(struct duongTron &a);
void chuViDienTich(struct duongTron a);
struct duongTron
{
	int a;
	int b;
	int R;
};

int main()
{
	struct duongTron dcm;
	nhap(dcm);
	chuViDienTich(dcm);
}
void nhap(struct duongTron &a)
{
	cout<<"Nhap hoanh do tam I cua duong tron: ";
	cin>>a.a;
	cout<<"Nhap tung do tam I cua duong tron: ";
	cin>>a.b;
	cout<<"Nhap ban kinh hinh tron: ";
	cin>>a.R;
}
void chuViDienTich(struct duongTron a)
{
	cout<<"Chu vi hinh tron: ";
	cout<<2*a.R*3.14<<endl;
	cout<<"Dien tich hinh tron: ";
	cout<<a.R*a.R*3.14<<endl;
}