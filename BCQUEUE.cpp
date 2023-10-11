#include <bits/stdc++.h>

using namespace std;

int main() {
	queue<int> v;
	int n;
	cin>>n;
	while(n--){
		int a;
		cin>>a;
		if(a==1) cout<<v.size()<<'\n';
		else if(a==2){
			if(v.empty()) cout<<"YES\n";
			else cout<<"NO\n";
		}
		else if(a==3){
			int n;
			cin>>n;
			v.push(n);
		}
		else if(a==4){
			if(!v.empty()) v.pop();
		}
		else if(a==5 || a==6){
			if(v.empty()) cout<<"-1\n";
			else{
				if(a==5) cout<<v.front()<<'\n';
				else cout<<v.back()<<'\n';
			}
		}
	}
}	