#include <iostream>
using namespace std;
void xuat(struct Oxy dcm);
void nhap(struct Oxy &dcm);
struct Oxy
{
	int a;
	int b;
	int c;
};

int main()
{
	struct Oxy dcm;
	nhap(dcm);
	xuat(dcm);
}
void nhap(struct Oxy &dcm)
{
	cout<<"Nhap a: ";;
	cin>>dcm.a;
	cout<<"Nhap b: ";
	cin>>dcm.b;
	cout<<"Nhap c: ";
	cin>>dcm.c;
}
void xuat(struct Oxy dcm)
{
	cout<<"PT DT: "<<dcm.a<<"x + "<<dcm.b<<"y + "<<dcm.c<<" = 0"<<endl;
}