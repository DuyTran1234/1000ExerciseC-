#include <iostream>
#include <math.h>
using namespace std;
void nhap(struct hinhCau &a);
void xuat(struct hinhCau a);
bool kiemTra(struct hinhCau a);
struct hinhCau
{
	int x;
	int y;
	int z;
	int r;
};
int main()
{
	hinhCau dcm;
	nhap(dcm);
	cout<<kiemTra(dcm)<<endl;
}
void nhap(struct hinhCau &a)
{
	cout<<"Nhap hoanh do tam hinh cau: ";
	cin>>a.x;
	cout<<"Nhap tung do tam hinh cau: ";
	cin>>a.y;
	cout<<"Nhap cao do tam hinh cau: ";
	cin>>a.z;
	cout<<"Nhap ban kinh hinh cau: ";
	cin>>a.r;	
}
void xuat(struct hinhCau a)
{
	cout<<"Hinh cau tam I("<<a.x<<","<<a.y<<","<<a.z<<") co R = "<<a.r<<endl;
}
bool kiemTra(struct hinhCau a)
{
	hinhCau b;
	cout<<"Nhap toa do diem can kiem tra: "<<endl;
	cout<<"Hoanh do x: ";
	cin>>b.x;
	cout<<"Tung do y: ";
	cin>>b.y;
	cout<<"Cao do z: ";
	cin>>b.z;
	if(pow(b.x - a.x,2) + pow(b.y - a.y,2) + pow(b.z - a.z,2) == pow(a.r,2))
	{
		return true;
	}
	else 
	{
		return false;
	}
}