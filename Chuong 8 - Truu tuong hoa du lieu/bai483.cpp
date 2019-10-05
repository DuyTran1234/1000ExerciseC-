#include <iostream>
using namespace std;
void nhap(struct Oxy &a);
void xuat(struct Oxy a);
struct Oxy
{
	int x;
	int y;
};
int main()
{
	struct Oxy dcm;
	nhap(dcm);
	xuat(dcm);
}
void nhap(struct Oxy &a)
{
	cout<<"Nhap hoanh do tam I cua duong tron: ";
	cin>>a.x;
	cout<<"Nhap tung do tam I cua duong tron: ";
	cin>>a.y;
}
void xuat(struct Oxy a)
{
	cout<<"PT duong tron: ";
	cout<<"(x - "<<a.x<<")^2 + (y - "<<a.y<<")^2 = R^2"<<endl;
}