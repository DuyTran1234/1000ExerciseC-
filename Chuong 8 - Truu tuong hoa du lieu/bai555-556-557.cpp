#include <iostream>
using namespace std;
void nhap(struct Oxyz &a);
void xuat(struct Oxyz a);
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