#include <iostream>
using namespace std;
void nhap(struct donThuc a[]);
void tich2DonThuc(struct donThuc a[]);
struct donThuc
{
	int a;
	int n;
};

int main()
{
	donThuc dcm[2];
	nhap(dcm);
	tich2DonThuc(dcm);
}
void nhap(struct donThuc a[])
{
	for(int i = 0; i < 2; i++)
	{
		cout<<"Nhap don thuc "<<i + 1<<": "<<endl;
		cout<<"Nhap he so: ";
		cin>>a[i].a;
		cout<<"Nhap so mu: ";
		cin>>a[i].n;
	}
}
void tich2DonThuc(struct donThuc a[])
{
	cout<<"S = ";
	cout<<a[0].a*a[1].a<<"x^"<<a[0].n +a[1].n<<endl;
}