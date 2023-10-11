#include <bits/stdc++.h>
#define ll long long
using namespace std;

//n=a+(a+1)+(a+2)+...+(a+b)=(2*a+b)*(b+1)/2
//=> tim uoc cua 2*n thoa man
int main() {
	int a;
	cin>>a;
	while(a--) {
		int t, n;
		cin>>t>>n;
		n*=2;
		vector<int> uoc;
		int can=sqrt(n);
		for(int i=1; i<=can; i++) {
			if(n%i==0) {
				uoc.push_back(i);
				if(n/i!=i) uoc.push_back(n/i);
			}
		}
		int res=0;
		sort(uoc.begin(), uoc.end());
		for(int i=0; i<uoc.size(); i++) {
			for(int j=i+1; j<uoc.size(); j++) {
				int t1=uoc[i]-1;
				double t2=1.0*(uoc[j]-t1)/2;
				if(t1>0 && t2==(int)t2 && t2>0 && uoc[i]*uoc[j]==n) {
					res++;
				}
			}
		}
		cout<<t<<' '<<res<<'\n';
	}
}