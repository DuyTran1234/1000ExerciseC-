#include <iostream>
#include <math.h>
using namespace std;
void nhap(struct tamGiac &a);
double dienTich(struct tamGiac a[]);
bool kiemTra(struct tamGiac a, struct tamGiac b, struct tamGiac c, struct tamGiac x);
double dienTich(struct tamGiac a, struct tamGiac b, struct tamGiac c);
struct tamGiac
{
	int x;
	int y;
};
int main()
{
	tamGiac dcm1;
	tamGiac dcm2;
	tamGiac dcm3;
	tamGiac wtf;
	nhap(dcm1);
	nhap(dcm2);
	nhap(dcm3);
	nhap(wtf);
	cout<<kiemTra(dcm1,dcm2,dcm3,wtf)<<endl;
}
void nhap(struct tamGiac &a)
{
	cout<<"Nhap toa do dinh: "<<endl;
	cout<<"Hoanh do x: ";
	cin>>a.x;
	cout<<"Tung do y: ";
	cin>>a.y;
}
double dienTich(struct tamGiac a, struct tamGiac b, struct tamGiac c)
{
	return 0.5*abs((b.x - a.x)*(c.y-a.y)-(c.x-a.x)*(b.y-a.y));
}
bool kiemTra(struct tamGiac a, struct tamGiac b, struct tamGiac c, struct tamGiac x)
{
	double m = dienTich(a,b,c);
	double n = dienTich(x,a,b) + dienTich(x,a,c) + dienTich(x,b,c);
	if(m == n)
	{
		return true;
	}
	else
	{
		return false;
	}
}