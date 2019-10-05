#include <iostream>
using namespace std;
void nhap(struct duongTron &a);
void xuat(struct duongTron a);
double chuViDuongTron(struct duongTron a);
struct duongTron
{
	int x;
	int y;
	int r;
};
int main()
{
	duongTron dcm1;
	nhap(dcm1);
	cout<<"Dien tich duong tron: "<<chuViDuongTron(dcm1)<<endl;
}
void nhap(struct duongTron &a)
{
	cout<<"Nhap hoanh do tam duong tron: ";
	cin>>a.x;
	cout<<"Nhap tung do tam duong tron: ";
	cin>>a.y;
	cout<<"Nhap ban kinh duong tron: ";
	cin>>a.r;
}
void xuat(struct duongTron a)
{
	cout<<"Duong tron tam I("<<a.x<<","<<a.y<<") ban kinh r = "<<a.r<<endl;
}
double chuViDuongTron(struct duongTron a)
{
	return a.r*a.r*3.14;
}