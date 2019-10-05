#include <iostream>
using namespace std;
int main()
{
	int s1 = 1000;
	int s2 = 2000;
	int s3 = 5000;
	int S = 0;
	int dem = 0;
	for( int i = 1; i <= 200 ; i++)
	{
		for( int j = 1; j <= 100; j++ )
		{
			for(int k = 1; k <= 40; k++)
			{
				S = i*s1 + j*s2 + k*s3;
				if(S == 200000)
				{
					cout<<"Can "<<i<<" to 1000d"<<endl;
					cout<<"Can "<<j<<" to 2000d"<<endl;
					cout<<"Can "<<k<<" to 5000d"<<endl;
					cout<<endl;
			
				}
			}
		}
	}
	
}