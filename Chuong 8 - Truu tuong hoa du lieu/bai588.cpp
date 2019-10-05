#include <iostream>
using namespace std;
void nhap(struct tamGiac a[]);
void xuat(struct tamGiac a[]);
void hoanhDoMax(struct tamGiac a[]);
struct tamGiac
{
	int x;
	int y;
};
int main()
{
	tamGiac dcm[2];
	nhap(dcm);
	hoanhDoMax(dcm);
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
void hoanhDoMax(struct tamGiac a[])
{
	int max = a[0].x;
	int index = 0;
	for(int i = 0; i < 3; i++)
	{
		if(a[i].x > max)
		{
			max = a[i].x;
			index = i;
		}
	}
	cout<<"Dinh co hoanh do lon nhat: ("<<a[index].x<<","<<a[index].y<<")"<<endl;
}