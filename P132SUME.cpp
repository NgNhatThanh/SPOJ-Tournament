#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct pt{
	double a ,b;
};

int main() {
	double x1,y1,x2,y2,x3,y3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	double S = 1.0/2*abs((x2-x1)*(y3-y1)-(x3-x1)*(y2-y1));
	double x = (x1+x2+x3)/3.0, y = (y1+y2+y3)/3.0; // trong tam tam giac
	pt arr[3];
	// tim he so cua 3 phuong trinh canh : y+ax+b=0;
	arr[0].a = 1.0*(y1-y2)/(x2-x1);
	arr[0].b = -1.0*y1 - 1.0*arr[0].a*x1;
	arr[1].a = 1.0*(y2-y3)/(x3-x2);
	arr[1].b = -1.0*y2 - 1.0*arr[1].a*x2;
	arr[2].a = 1.0*(y1-y3)/(x3-x1);
	arr[2].b = -1.0*y1 - 1.0*arr[2].a*x1;
	double c1 = y+arr[0].a*x+arr[0].b;
	double c2 = y+arr[1].a*x+arr[1].b;
	double c3 = y+arr[2].a*x+arr[2].b;
	int n;
	cin>>n;
	int res=0;
	while(n--){
		double m,n;
		cin>>m>>n;
		double a1 = n+m*arr[0].a+arr[0].b;
		double a2 = n+m*arr[1].a+arr[1].b;
		double a3 = n+m*arr[2].a+arr[2].b;
		if(a1*c1>=0 && a2*c2>=0 && a3*c3>=0) res++;
	}
	cout<<setprecision(1)<<fixed<<S<<'\n';
	cout<<res;
}
