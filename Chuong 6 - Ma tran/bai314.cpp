#include <iostream>
using namespace std;
void nhapMang(int a[][100], int &m, int &n);
void xuatMang(int a[][100],int m,int n);
int main()
{
	int mSize = 0;
	int nSize = 0;
	int nArray[100][100];
	nhapMang(nArray,mSize,nSize);
	cout<<endl;
	xuatMang(nArray,mSize,nSize);
}
void nhapMang(int a[][100], int &m, int &n) 
{
	cout<<"Nhap so phan tu hang cua mang: ";
	cin>>m;
	cout<<"Nhap so phan tu cot cua mang: ";
	cin>>n;
	for(int i = 0; i < m; i++) 
	{
		for(int j = 0; j < n; j++) 
		{
			cout<<"a["<<i<<"]["<<j<<"] = ";
			cin>>a[i][j];
		}	
	}
}
void xuatMang(int a[][100],int m,int n){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cout<<a[i][j]<<"  ";
		}
		cout<<endl;
	}
}
