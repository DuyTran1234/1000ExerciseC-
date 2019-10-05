#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	cout<<"GIAI HE PT: Ax + By = C"<<endl;
	cout<<"\tDx + Ex = F"<<endl;
	double a,b,c,d,e,f,x,y;
	cout<<"Nhap a: ";
	cin>>a;
	cout<<"Nhap b: ";
	cin>>b;
	cout<<"Nhap c: ";
	cin>>c;
	cout<<"Nhap d: ";
	cin>>d;
	cout<<"Nhap e: ";
	cin>>e;
	cout<<"Nhap f: ";
	cin>>f;
	if( a/d != b/e )
	{
		cout<<"PT co mot nghiem la: "<<endl;
		y = (f*a - d*c)/(a*e - d*b);
		x = (c - b*y)/a;
		cout<<"x = "<<x<<endl;
		cout<<"y = "<<y<<endl;
	}
	else if( (a/d == b/e) && (a/d != c/f ) )
	{
		cout<<"PT vo nghiem"<<endl;
	}
	else if ( (a/d == b/e) && (a/d == c/f) )
	{
		cout<<"PT vo so nghiem"<<endl;
	}
}