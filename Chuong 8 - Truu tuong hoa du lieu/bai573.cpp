#include <iostream>
#include <math.h>
using namespace std;
void nhap(struct duongTron &a);
void xuat(struct duongTron a);
string viTriTuongDoi(struct duongTron a, struct duongTron b);
double dienTichBiPhu(struct duongTron a, struct duongTron b);
struct duongTron
{
	int x;
	int y;
	int r;
};
int main()
{
	duongTron dcm1;
	duongTron dcm2;	
	nhap(dcm1);
	nhap(dcm2);
	cout<<"Dien tich phan mat phang bi phu: "<<dienTichBiPhu(dcm1,dcm2)<<endl;
}
void nhap(struct duongTron &a)
{
	cout<<"Nhap hoanh do tam duong tron: ";
	cin>>a.x;
	cout<<"Nhap tung do tam duong tron: ";
	cin>>a.y;
	cout<<"Nhap ban kinh duong tron: ";
	cin>>a.r;
}
void xuat(struct duongTron a)
{
	cout<<"Duong tron tam I("<<a.x<<","<<a.y<<") ban kinh r = "<<a.r<<endl;
}
string viTriTuongDoi(struct duongTron a, struct duongTron b)
{
	double kc = sqrt((a.x - b.x)*(a.x - b.x) + (a.y-b.y)*(a.y-b.y));
	if(abs(a.r - b.r) < kc && abs(a.r + b.r) > kc )
	{
		return "cat nhau";
	}
	else if(kc == abs(a.r - b.r))
	{
		return "tiep xuc trong";
	}
	else if(kc == abs(a.r + b.r))
	{
		return "tiep xuc ngoai";
	}
	else if(kc == abs(a.r + b.r)){
		return "o ngoai nhau";
	}
	else if(kc == abs(a.r - b.r))
	{
		return "dung nhau";
	}
	else if(kc == 0)
	{
		return "dong tam";
	}
}
double dienTichBiPhu(struct duongTron a, struct duongTron b)
{
	if(viTriTuongDoi(a,b) == "cat nhau")
	{
		return fabs(a.r*a.r*3.14 - b.r*b.r*3.14);
	}
	else if(viTriTuongDoi(a,b) == "tiep xuc trong" || viTriTuongDoi(a,b) == "dung nhau" || viTriTuongDoi(a,b) == "dong tam")
	{
		return b.r*b.r*3.14;
	}
}