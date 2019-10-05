#include <iostream>
#include <math.h>
using namespace std;
void nhap(struct tamGiac a[]);
void xuat(struct tamGiac a[]);
string dangTamGiac(struct tamGiac a[]);
struct tamGiac
{
	int x;
	int y;
};
int main()
{
	tamGiac dcm[2];
	nhap(dcm);
	cout<<"Tam giac: "<<dangTamGiac(dcm)<<endl;
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
string dangTamGiac(struct tamGiac a[])
{
	double AB = sqrt(pow(a[0].x - a[1].x,2) + pow(a[0].y - a[1].y,2));
	double AC = sqrt(pow(a[0].x - a[2].x,2) + pow(a[0].y - a[2].y,2));
	double BC = sqrt(pow(a[1].x - a[2].x,2) + pow(a[1].y - a[2].y,2));
	if(AB == AC || AB == BC || AC == BC)
	{
		if(AB == BC && AB == AC)
		{
			return "deu";
		}
		else if(AB*AB + AC*AC == BC*BC || AB*AB + BC*BC == AC*AC || AC*AC + BC*BC == AB*AB)
		{
			return "vuong can";
		}
		else if(AB != BC || AB != AC)
		{
			return "can";
		}
	}
	else if(AB*AB + AC*AC == BC*BC || AB*AB + BC*BC == AC*AC || AC*AC + BC*BC == AB*AB)
	{
		return "vuong";
	}
	else
	{
		return "thuong";
	}
}