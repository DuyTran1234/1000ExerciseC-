#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	srand(time(NULL));
	int *ptr = new int[100];
	for(int i = 0; i < 100; i++)
	{
		*(ptr + i) = rand()%100 + 1;
	}
	for(int i = 0; i < 100; i++)
	{
		cout<<"a["<<i<<"] = "<<ptr[i]<<endl;
	}
	delete[] ptr;
}