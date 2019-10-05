#include <iostream>
using namespace std;
void nhap(struct soPhuc &a);
void xuat(struct soPhuc a);
struct soPhuc
{
	int a;		// phan thuc
	int b;		// phan ao
};
int main()
{
	soPhuc dcm;
	nhap(dcm);
	xuat(dcm);
}
void nhap(struct soPhuc &a)
{
	cout<<"Nhap phan thuc: ";
	cin>>a.a;
	cout<<"Nhap phan ao: ";
	cin>>a.b;
}
void xuat(struct soPhuc a)
{
	cout<<a.a<<" + "<<a.b<<"i"<<endl;
}