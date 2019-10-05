#include <iostream>
#include <math.h>
using namespace std;
void nhap(struct tamGiac a[]);
void xuat(struct tamGiac a[]);
double tongKhoangCach(struct tamGiac a[]);
struct tamGiac
{
	int x;
	int y;
};
int main()
{
	tamGiac dcm[2];
	nhap(dcm);
	cout<<"Tong khoang cach: "<<tongKhoangCach(dcm)<<endl;
}
void nhap(struct tamGiac a[])
{
	for(int i = 0; i < 3; i++)
	{
		cout<<"Nhap toa do dinh "<<i+1<<": "<<endl;
		cout<<"Hoanh do x: ";
		cin>>a[i].x;
		cout<<"Tung do y: ";
		cin>>a[i].y;
	}
}
void xuat(struct tamGiac a[])
{
	cout<<"Toa do 3 dinh tam giac: ";
	for(int i = 0; i < 3; i++)
	{
		cout<<"("<<a[i].x<<","<<a[i].y<<") ";
	}
	cout<<endl;
}
double tongKhoangCach(struct tamGiac a[])
{
	tamGiac Pxy;
	cout<<"Nhap toa do P(x,y) can tinh: "<<endl;
	cout<<"Hoanh do: ";
	cin>>Pxy.x;
	cout<<"Tung do: ";
	cin>>Pxy.y;
	double kcA = sqrt(pow(Pxy.x - a[0].x,2)+ pow(Pxy.y - a[0].y,2));
	double kcB = sqrt(pow(Pxy.x - a[1].x,2)+ pow(Pxy.y - a[1].y,2));
	double kcC = sqrt(pow(Pxy.x - a[2].x,2)+ pow(Pxy.y - a[2].y,2));
	return kcA + kcB + kcC;
}