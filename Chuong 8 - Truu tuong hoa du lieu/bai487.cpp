#include <iostream>
using namespace std;
void nhap(struct donThuc &a);
void daoHam(struct donThuc a);
struct donThuc
{
	int a;
	int n;
};
int main()
{
	donThuc dcm;
	nhap(dcm);
	daoHam(dcm);
}
void nhap(struct donThuc &a)
{
	cout<<"Nhap he so: ";
	cin>>a.a;
	cout<<"Nhap so mu: ";
	cin>>a.n;
}
void daoHam(struct donThuc a)
{
	cout<<"Dao ham cap 1 don thuc: ";
	cout<<a.a*a.n<<"x^"<<a.n-1<<endl;
}