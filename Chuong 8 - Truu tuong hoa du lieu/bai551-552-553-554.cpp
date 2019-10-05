#include <iostream>
using namespace std;
void xuat(struct Oxy a);
void nhap(struct Oxy &a);
int kiemTra(struct Oxy a);
struct Oxy
{
	int x;
	int y;
};
int main()
{
	Oxy dcm;
	nhap(dcm);
	cout<<kiemTra(dcm)<<endl;
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
int kiemTra(struct Oxy a)
{
	if(a.x > 0 && a.y > 0)
	{
		return 1;
	}
	else if(a.x < 0 && a.y < 0)
	{
		return 3;
	}
	else if(a.x > 0 && a.y < 0)
	{
		return 2;
	}
	else if(a.x < 0 && a.y > 0)
	{
		return 4;
	}
	else
	{
		return 0;
	}
}