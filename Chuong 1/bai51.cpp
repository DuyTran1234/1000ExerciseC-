#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int nMem;
	int MAX = 0;
	while(n!=0)
	{
		nMem = n%10;
		if(nMem > MAX)
		{
			MAX = nMem;
		}
		n = n/10;
	}
	cout<<"Chu so lon nhat trong n: "<<MAX<<endl;
}