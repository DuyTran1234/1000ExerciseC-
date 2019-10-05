#include <iostream>
using namespace std;
void nhap(struct tamGiac a[]);
void xuat(struct tamGiac a[]);
void hePT(double &m, double &n,struct tamGiac a[]);
bool kiemTra(struct tamGiac a[]);
struct tamGiac
{
	int x;
	int y;
};
int main()
{
	tamGiac dcm[2];
	nhap(dcm);
	cout<<kiemTra(dcm)<<endl;
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
bool kiemTra(struct tamGiac a[])
{
	double m;
	double n;
	hePT(m,n,a);
	if(m*a[2].x + n == a[2].y)
	{
		return false;
	}
	else
	{
		return true;
	}
}
void hePT(double &m, double &n,struct tamGiac a[])
{	
	m = (a[0].y - a[1].y)/(a[0].x - a[1].x);
	n = a[0].y - a[0].x * m;
}