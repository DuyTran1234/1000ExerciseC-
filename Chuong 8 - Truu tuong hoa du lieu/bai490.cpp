#include <iostream>
#include <math.h>
using namespace std;
void nhap(struct donThuc &a);
void giaTriDonTHuc(struct donThuc a);
struct donThuc
{
	int a;
	int n;
};
int main()
{
	donThuc dcm;
	nhap(dcm);
	giaTriDonTHuc(dcm);
}
void nhap(struct donThuc &a)
{
	cout<<"Nhap he so: ";
	cin>>a.a;
	cout<<"Nhap so mu: ";
	cin>>a.n;
}
void giaTriDonTHuc(struct donThuc a)
{
	int x;
	int n = a.n;
	cout<<"Nhap x = ";
	cin>>x;
	cout<<"S = ";
	cout<<a.a*pow(x,n)<<endl;
}