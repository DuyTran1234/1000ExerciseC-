#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	do
	{
		cout<<"Nhap n nguyen duong co 3 chu so: ";
		cin>>n;
	}while(n < 100 || n > 999);
	int hangTram = n / 100;
	int hangDonVi = n % 10;
	int hangChuc = ( n - (hangTram*100 + hangDonVi))/10;
	string S[100];
	S[1] = "mot";
 	S[2] = "hai";
	S[3] = "ba";
 	S[4] = "bon";
	S[5] = "nam";
 	S[6] = "sau";
 	S[7] = "bay";
 	S[8] = "tam";
 	S[9] = "chin";
 	S[0] = "muoi";
 	if(hangChuc == 0)
 	{
	 	if(hangDonVi == 0)
	 	{
	 		cout<<S[hangTram]<<" "<<"tram"<<endl;
	 	}
	 	else 
	 	{
	 		cout<<S[hangTram]<<" "<<"tram le "<<S[hangDonVi]<<endl;
	 	}
 	}
 	else if(hangChuc != 0)
 	{
 		if(hangDonVi == 0)
 		{
 			if(hangChuc == 1)
		 	{
		 		cout<<S[hangTram]<<" tram "<<S[0]<<endl;
		 	}
	 	}
	 	else if(hangChuc!=1)
	 	{
	 		cout<<S[hangTram]<<" tram "<<S[hangChuc]<<" "<<S[hangDonVi]<<endl;
	 	}
	 	
 	}
}