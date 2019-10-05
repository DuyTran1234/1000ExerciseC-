#include <iostream>
using namespace std;
void nhap(struct Px &dcm);
void xuat(struct Px dcm);
struct Px
{
	int a;
	int n;	
};
int main()
{
	struct Px dcm;
	nhap(dcm);
	xuat(dcm);
}
void nhap(struct Px &dcm)
{
	cout<<"Nhap a: ";
	cin>>dcm.a;
	cout<<"Nhap n: ";
	cin>>dcm.n;
}
void xuat(struct Px dcm)
{
	cout<<"Bieu thuc P(x) = ";
	cout<<dcm.a<<"x^"<<dcm.n<<endl;
}