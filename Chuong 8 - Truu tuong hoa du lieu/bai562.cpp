#include <iostream>
using namespace std;
void nhap(struct Oxyz &a);
void xuat(struct Oxyz a);
struct Oxyz diemDoiXung(struct Oxyz a);
struct Oxyz
{
	int x;
	int y;
	int z;
};
int main()
{
	Oxyz dcm1;
	Oxyz dcm2;
	nhap(dcm1);
	dcm2 = diemDoiXung(dcm1);
	xuat(dcm2);
}
void nhap(struct Oxyz &a)
{
	cout<<"Nhap hoanh do: ";
	cin>>a.x;
	cout<<"Nhap tung do: ";
	cin>>a.y;
	cout<<"Nhap cao do: ";
	cin>>a.z;
}
void xuat(struct Oxyz a)
{
	cout<<"M("<<a.x<<","<<a.y<<","<<a.z<<")"<<endl;
}
struct Oxyz diemDoiXung(struct Oxyz a)
{
	Oxyz c;
	c.x = a.x * -1;
	c.y = a.y * -1;
	c.z = a.z * -1;
	return c;
}