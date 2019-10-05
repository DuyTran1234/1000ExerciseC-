#include <iostream>
using namespace std;
void nhap(struct hinhCau &a);
void xuat(struct hinhCau a);
double dienTichXQ(struct hinhCau a);
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
	cout<<"Sxq = "<<dienTichXQ(dcm)<<endl;
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
double dienTichXQ(struct hinhCau a)
{
	return 4*3.14*a.r*a.r;
}