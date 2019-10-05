#include <iostream>
using namespace std;
void nhap(struct donThuc &a);
void daoHamCapK(struct donThuc a);
struct donThuc
{
	int a;
	int n;
};
int main()
{
	donThuc dcm;
	nhap(dcm);
	daoHamCapK(dcm);
}
void nhap(struct donThuc &a)
{
	cout<<"Nhap he so: ";
	cin>>a.a;
	cout<<"Nhap so mu: ";
	cin>>a.n;
}
void daoHamCapK(struct donThuc a)
{
	int k = 1;
	int S = a.n;
	cout<<"Nhap cap dao ham: ";
	cin>>k;
	for(int i = 0; i < k; i++)
	{
		a.a = a.a * S;
		S--;
	}
	cout<<"Dao ham cap "<<k<<" cua don thuc: ";
	cout<<a.a<<"x^"<<S<<endl;
}