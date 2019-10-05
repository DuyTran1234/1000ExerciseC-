#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	string S[900];
	do
	{
		cout<<"Nhap n la so nguyen duong 2 chu so: ";
		cin>>n;
	}while(n<10 || n> 99);
 	S[1] = "Mot";
 	S[2] = "Hai";
	S[3] = "Ba";
 	S[4] = "Bon";
	S[5] = "Nam";
 	S[6] = "Sau";
 	S[7] = "Bay";
 	S[8] = "Tam";
 	S[9] = "Chin";
 	S[0] = "Muoi";
	int hangChuc = n / 10;
	int hangDonVi = n % 10;
	
	if(hangChuc==1)
	{
		if(hangDonVi == 0)
		{
			cout<<S<<endl;
		}
		else 
		{
			cout<<S[0]<<" "<<S[hangDonVi]<<endl;
		}
	}
	else
	{
		cout<<S[hangChuc]<<" "<<S[hangDonVi]<<endl;
	}
}