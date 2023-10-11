#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	int n;
	int t=1;
	while(cin>>n){
		if(n<0) return 0;
		int tmp = n;
		double mot=0, hai=0;
		double kl=0;
		while(tmp--){
			double x,y,m;
			cin>>x>>y>>m;
			kl+=m;
			mot+=m*x;
			hai+=m*y;
		}
		double a = mot/kl;
		double b = hai/kl;
		cout<<"Case "<<t++<<": "<<setprecision(2)<<fixed<<a<<" "<<b<<'\n';
	}
}