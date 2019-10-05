#include <iostream>
#include <math.h>
using namespace std;
void xuat(struct Oxy a);
void nhap(struct Oxy &a);
double khoangCach2Diem(struct Oxy a, struct Oxy b);
struct Oxy
{
	int x;
	int y;
};
int main()
{
	Oxy dcm1;
	Oxy dcm2;
	nhap(dcm1);
	nhap(dcm2);
	cout<<"Khoang cach 2 diem: "<<khoangCach2Diem(dcm1,dcm2)<<endl;
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
double khoangCach2Diem(struct Oxy a, struct Oxy b)
{
	double kc = sqrt((a.x - b.x)*(a.x - b.x) +(a.y-b.y)*(a.y-b.y));
	return kc;
}