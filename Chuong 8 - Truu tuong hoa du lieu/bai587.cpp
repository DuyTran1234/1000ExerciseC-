#include <iostream>
using namespace std;
void nhap(struct tamGiac a[]);
void xuat(struct tamGiac a[]);
void trongTam(struct tamGiac a[]);
struct tamGiac
{
	int x;
	int y;
};
int main()
{
	tamGiac dcm[2];
	nhap(dcm);
	trongTam(dcm);
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
void trongTam(struct tamGiac a[])
{
	cout<<"M("<<(a[0].x+a[1].x+a[2].x)/3.0<<","<<(a[0].y+a[1].y+a[2].y)/3<<")"<<endl;
}