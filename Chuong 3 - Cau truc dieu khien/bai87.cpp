#include <iostream>
using namespace std;
int main()
{
	int n = 1;
	int S = 0;
	
	while(S <= 10000)
	{
		S = S + n;
		n++;
	}
	cout<<"n nho nhat sao cho S > 10000 la: "<<n<<endl;
}