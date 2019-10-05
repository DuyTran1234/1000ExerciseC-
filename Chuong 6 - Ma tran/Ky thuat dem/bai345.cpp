#include <iostream>
using namespace std;
void nhapMang(int a[][100], int &m, int &n);
void xuatMang(int a[][100], int m, int n);
int tongCucTri(int a[][100], int m, int n);
int main() {
	int mSize;
	int nSize;
	int nArray[100][100];
	nhapMang(nArray,mSize,nSize);
	cout<<endl;
	xuatMang(nArray,mSize,nSize);
	cout<<"S = "<<tongCucTri(nArray,mSize,nSize)<<endl;
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
int tongCucTri(int a[][100], int m, int n)
{
	int S = 0;
	int dem = 0;
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i == 0)
			{
				if(j == 0)
				{
					if( (a[i][j] > a[i][j+1] && a[i][j] > a[i+1][j]) ||(a[i][j] < a[i][j+1] && a[i][j] < a[i+1][j]) )
					{
						S = S + a[i][j];
						dem++;
					}
				}
				else if(j == n -1)
				{
					if( (a[i][j] > a[i][j-1] && a[i][j] > a[i+1][j]) || (a[i][j] < a[i][j-1] && a[i][j] < a[i+1][j]) )
					{
						S = S + a[i][j];
						dem++;
					}
				}
				else if(j != 0 && j != n-1)
				{
					if(a[i][j] > a[i][j+1] && a[i][j] > a[i][j-1] && a[i][j] > a[i][j+1])
					{
						S = S + a[i][j];
						dem++;
					}
					else if(a[i][j] < a[i][j+1] && a[i][j] < a[i][j-1] && a[i][j] < a[i][j+1])
					{
						S = S + a[i][j];
						dem++;
					}
				}
			}
			if(i == m - 1)
			{
				if(j == 0)
				{
					if( (a[i][j] > a[i-1][j] && a[i][j] > a[i][j+1]) || (a[i][j] < a[i-1][j] && a[i][j] > a[i][j+1]) )
					{
						S = S + a[i][j];
						dem++;
					}
				}
				else if(j == n - 1)
				{
					if( (a[i][j] > a[i-1][j] && a[i][j] > a[i][j-1]) || (a[i][j] < a[i-1][j] && a[i][j] < a[i][j-1]) )
					{
						S = S + a[i][j];
						dem++;	
					}
				}
				else if(j != 0 && j != n - 1)
				{
					if(a[i][j] > a[i-1][j] && a[i][j] > a[i][j-1] && a[i][j] > a[i][j+1])
					{
						S = S + a[i][j];
						dem++;
					}
				}
			}
			else if(j == 0)
			{
				if(i != 0 && i != m -1)
				{
					if(a[i][j] > a[i-1][j] && a[i][j] > a[i+1][j] && a[i][j] > a[i][j+1] )
					{
						S = S + a[i][j];
						dem++;
					}
					else if(a[i][j] < a[i-1][j] && a[i][j] < a[i+1][j] && a[i][j] < a[i][j+1])
					{
						S = S + a[i][j];
						dem++;
					}
				}
			}
			else if( j == n - 1)
			{
				if(i != 0 && i != m - 1)
				{
					if(a[i][j] > a[i-1][j] && a[i][j] > a[i+1][j] && a[i][j] > a[i][j-1])
					{
						S = S + a[i][j];
						dem++;
					}
					else if(a[i][j] < a[i-1][j] && a[i][j] < a[i+1][j] && a[i][j] < a[i][j-1])
					{
						S = S + a[i][j];
						dem++;
					}
				}
			}
			else
			{
				if(a[i][j] > a[i+1][j] && a[i][j] > a[i-1][j] && a[i][j] > a[i][j+1] && a[i][j] > a[i][j-1])
				{
					S = S + a[i][j];
					dem++;
				}
				else if(a[i][j] < a[i+1][j] && a[i][j] < a[i-1][j] && a[i][j] < a[i][j+1] && a[i][j] < a[i][j-1])
				{
					S = S + a[i][j];
					dem++;
				}
			}
		}
	}
	return S;
}