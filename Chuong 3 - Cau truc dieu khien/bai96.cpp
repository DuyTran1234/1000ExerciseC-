#include <iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Nhap x: ";
	cin>>x;
	int S = 0;
	if(x >= 5)
	{
		S = 2*x*x + 5*x + 9;
	}
	else if(x < 5)
	{
		S = -2*x*x + 4*x - 9;
	}
	cout<<"S = "<<S<<endl;
}