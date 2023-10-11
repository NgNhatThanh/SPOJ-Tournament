#include <bits/stdc++.h>
 
using namespace std;
 
float xoay(float a, float b,float c, float d){
	float res=abs(a/c-b/d);
	return res;	
}
 
int main(){
	float a,b,c,d;
	cin >> a >> b >> c >> d;
	int res=0;
	float gt=xoay(a, b, c, d);
	if(xoay(c, a, d, b)>gt) {
		res=1;
		gt=xoay(c, a, d, b);
	}
	if(xoay(d, c, b, a)>gt) {
		res=2;
		gt=xoay(d, c, b, a);
	}
	if(xoay(b, d, a, c)>gt){
		res=3;
		gt=xoay(b, d, a, c);
	}
	cout << res;
}