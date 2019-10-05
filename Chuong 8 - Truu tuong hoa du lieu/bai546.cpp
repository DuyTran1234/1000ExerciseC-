#include <iostream>
using namespace std;
void xuat(struct Oxy a);
void nhap(struct Oxy &a);
struct Oxy diemDoiXung(struct Oxy a);
struct Oxy
{
	int x;
	int y;
};
int main()
{
	Oxy dcm;
	
	nhap(dcm);
	Oxy doiXung = diemDoiXung(dcm);
	xuat(doiXung);
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
struct Oxy diemDoiXung(struct Oxy a)
{
	Oxy c;
	c.x = a.x * -1;
	c.y = a.y * -1;
	return c;
}