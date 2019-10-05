#include <iostream>
using namespace std;
void nhapMang(int a[][100], int &m, int &n);
void xuatMang(int a[][100], int m, int n);
bool maTranCon(int a[100][100], int b[100][100], int m, int n, int a, int b);
int main() {
	int mSize;
	int nSize;
	int xSize;
	int ySize;
	int nArray[100][100];
	int mArray[100][100];
	nhapMang(nArray,mSize,nSize);
	cout<<endl;
	xuatMang(nArray,mSize,nSize);
	
	nhapMang(mArray,xSize,ySize);
	cout<<endl;
	xuatMang(mArray,xSize,ySize);
	
	cout<<maTranCon(nArray, mArray, mSize, nSize, xSize, ySize)<<endl;
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
bool maTranCon(int a[100][100], int b[100][100], int m, int n, int x, int y)
{
}