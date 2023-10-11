#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int ucln(int a, int b){
	if(!b) return a;
	return ucln(b, a%b);
}

int main() {
	int m, n;
	cin>>m>>n;
	int mot[m+1], hai[n+1];
	for(int &x : mot ) cin>>x;
	for(int &x : hai ) cin>>x;
	if(m>n){
		if(mot[0]*hai[0]<0) cout<<"-Infinity";
		else cout<<"Infinity";
	}
	else if(m<n){
		cout<<"0/1";
	}
	else{
		int a=mot[0];
		int b=hai[0];
		if(b<0){
			b*=-1;
			a*=-1;
		}
		int tmp = abs(a);
		int uc = ucln(tmp, b);
		a/=uc;
		b/=uc;
		cout<<a<<"/"<<b;
	}
}