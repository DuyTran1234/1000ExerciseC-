#include <iostream>
#include <math.h>
using namespace std;
void nhap(struct Oxyz &a);
void xuat(struct Oxyz a);
double khoangCachKhongGian(struct Oxyz a, struct Oxyz b);
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
	nhap(dcm2);
	cout<<"kc giua 2 diem theo phuong x: "<<khoangCachKhongGian(dcm1,dcm2)<<endl;
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
double khoangCachKhongGian(struct Oxyz a, struct Oxyz b)
{
	double z = abs(a.x) + abs(b.x);
	return z;
}