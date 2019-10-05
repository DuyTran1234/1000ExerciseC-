#include <iostream>
#include <cmath>
using namespace std;
void nhap(struct tamGiac a[]);
void tinhToan(struct tamGiac a[]);
struct tamGiac
{
	int x;
	int y;
};
int main()
{
	tamGiac dcm[2];
	nhap(dcm);
	tinhToan(dcm);
}
void nhap(tamGiac a[])
{
	for(int i = 0; i < 3; i++)
	{
		cout<<"Nhap toa do dinh "<<i<<": "<<endl;
		cout<<"x: ";
		cin>>a[i].x;
		cout<<"y: ";
		cin>>a[i].y;
	}
}
void tinhToan(tamGiac a[])
{
	cout<<"Dien tich tam giac: ";
	cout<<0.5*abs( (a[1].x - a[0].x)*(a[2].y - a[0].y) - (a[2].x - a[0].x)*(a[1].y - a[0].y))<<endl;
	cout<<"Chu vi tam giac: ";
	double AB = sqrt( (a[1].x - a[0].x)*(a[1].x - a[0].x) + (a[1].y - a[0].y)*(a[1].y - a[0].y));
	double AC = sqrt( (a[2].x - a[0].x)*(a[2].x - a[0].x) + (a[2].y - a[0].y)*(a[2].y - a[0].y));
	double BC = sqrt( (a[2].x - a[1].x)*(a[2].x - a[1].x) + (a[2].y - a[1].y)*(a[2].y - a[1].y));
	cout<<AB + AC + BC<<endl;
	cout<<"Toa do trong tam tam giac: ";
	cout<<"("<<(a[0].x + a[1].x + a[2].x)/3<<"; "<<(a[0].y + a[1].y + a[2].y)/3<<")"<<endl;
}