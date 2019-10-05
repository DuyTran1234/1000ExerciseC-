#include <iostream>
using namespace std;
void nhap(struct duongTron &a);
void xuat(struct duongTron a);
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
	xuat(dcm1);
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