#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c,d;
	while(cin>>a>>b>>c>>d) {
		if(a==-1 && b==-1 && c==-1 && d==-1) return 0;
		int res=-1;
		if(a==-1) {
			if(c-b==d-c) res=b-(c-b);
			else if(c/b==d/c && c%b==0 && d%c==0 && b%(c/b)==0) res=b/(c/b);
		} else if(b==-1) {
			if(c-a==2*(d-c)) res=a+(d-c);
			else if(c/a==(d/c)*(d/c) && c%a==0 && d%c==0) res=a*(d/c);
		} else if(c==-1) {
			if(d-b==2*(b-a)) res=b+(b-a);
			else if(d/b==(b/a)*(b/a) && d%b==0 && b%a==0) res=b*(b/a);
		} else if(d==-1) {
			if(c-b==b-a) res=c+(c-b);
			else if(c/b==b/a && c%b==0 && b%a==0) res=c*(c/b);
		}
		if(res>=1 && res<=10000) cout<<res<<'\n';
		else cout<<-1<<'\n';
	}
}