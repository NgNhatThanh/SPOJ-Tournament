#include <bits/stdc++.h>

using namespace std;



pair<int, int> check1(int n, int m,char a, char b) {
	string res;
	res+=a;
	n--;
	int k=1;
	int turn=2;
	while(n || m) {
		if(res[k-1]==a) {
			if(turn==2) {
				turn=1;
				if(m) {
					res+=b;
					m--;
				} else {
					res+=a;
					n--;
				}
			} else {
				turn=2;
				if(n) {
					res+=a;
					n--;
				} else {
					res+=b;
					m--;
				}
			}
		} else {
			if(turn==2) {
				turn=1;
				if(n) {
					res+=a;
					n--;
				} else {
					res+=b;
					m--;
				}
			} else {
				turn=2;
				if(m) {
					res+=b;
					m--;
				} else {
					res+=a;
					n--;
				}
			}
		}
	}
	pair<int ,int> v;
	for(int i=1;i<res.size();i++){
		if(res[i]==res[i-1]) v.second++;
		else v.first++;
	}
	return v;
}

int main() {
	int n,m;
	cin>>n>>m;
	pair<int ,int > v1 = check1(n,m,'R', 'B');
	pair<int,int> v2 = check1(n,m,'B','R');
	pair<int, int> res = max(v1, v2);
	cout<<res.first<<" "<<res.second;

}