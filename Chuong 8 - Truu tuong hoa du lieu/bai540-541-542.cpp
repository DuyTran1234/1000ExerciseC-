#include <iostream>
using namespace std;
void xuat(struct Oxy a);
void nhap(struct Oxy &a);
struct Oxy
{
	int x;
	int y;
};
int main()
{
	Oxy dcm;
	nhap(dcm);
	xuat(dcm);
}
void nhap(struct Oxy &a)
{
	cout<<"Nhap hoanh do: ";
	cin>>a.x;
	cout<<"Nhap tung do: ";
	cin>>a.y;
}
void xuat(struct Oxy a)
{
	cout<<"M("<<a.x<<","<<a.y<<")"<<endl;
}