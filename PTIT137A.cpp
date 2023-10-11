#include <bits/stdc++.h>
using namespace std;
#define faster() ios::sync_with_stdio(false); cin.tie(nullptr);
 
int main() {
	faster()
	long long a,b,c,d;
	while(cin >> a >> b >> c >> d) {
		if(a == 0) return 0;
		set<long long> v;
		v.insert(a);
		v.insert(b);
		v.insert(c);
		v.insert(d);
		int res=0;
		while(v.size() != 1) {
			v.clear();
			res++;
			long long tmp=a;
			a=abs(a-b);
			b=abs(b-c);
			c=abs(c-d);
			d=abs(d-tmp);
			v.insert(a);
			v.insert(b);
			v.insert(c);
			v.insert(d);
		}
		cout << res << '\n';
	}
}  