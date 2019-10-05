#include <iostream>
using namespace std;
void nhapMang(int a[][100], int &m, int &n);
void xuatMang(int a[][100], int m, int n);
void dongLonNhat(int a[][100], int m, int n);

int main() {
	int mSize;
	int nSize;
	int nArray[100][100];
	nhapMang(nArray,mSize,nSize);
	cout<<endl;
	xuatMang(nArray,mSize,nSize);
	dongLonNhat(nArray,mSize,nSize);
}
void nhapMang(int a[][100], int &m, int &n)
{
	cout<<"Nhap so hang: ";
	cin>>m;
	cout<<"Nhap so cot: ";
	cin>>n;
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			cout<<"a["<<i<<"]["<<j<<"] = ";
			cin>>a[i][j];
		}
	}
}
void xuatMang(int a[][100], int m, int n) {
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			cout<<a[i][j]<<"	";
		}
		cout<<endl;
	}
}
void dongLonNhat(int a[][100], int m, int n)
{
	cout<<"Cac dong co tong lon nhat: "<<endl;
	int max = 0;
	for(int i = 0; i < m; i++)
	{
		int S = 0;
		for(int j = 0; j < n; j++)
		{
			S = S + a[i][j];
		}
		if(S > max)
		{
			max = S;
		}
	}
	for(int i = 0; i < m; i++)
	{
		int Tong = 0;
		for(int j = 0; j < n; j++)
		{
			Tong = Tong + a[i][j];
		}
		if(Tong == max)
		{
			cout<<i+1<<endl;
		}
	}
}