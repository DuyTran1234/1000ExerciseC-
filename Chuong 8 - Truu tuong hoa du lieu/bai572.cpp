#include <iostream>
using namespace std;
void nhap(struct duongTron &a);
void xuat(struct duongTron a);
bool kiemTra1Diem(struct duongTron a);
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
	cout<<kiemTra1Diem(dcm1)<<endl;
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
bool kiemTra1Diem(struct duongTron a)
{
	duongTron b;
	cout<<"Nhap hoanh do diem can kiem tra: ";
	cin>>b.x;
	cout<<"Nhap tung do diem can kiem tra: ";
	cin>>b.y;
	if((b.x - a.x)*(b.x - a.x) + (b.y - a.y)*(b.y - a.y) - a.r*a.r == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}