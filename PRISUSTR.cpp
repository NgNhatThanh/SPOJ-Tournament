#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int nt[1000006];

void sang(){
	nt[1]=1;
	for(int i=2;i<=sqrt(1000000);i++){
		if(nt[i]==0){
			for(int j=i*i;j<=1000000;j+=i) nt[j]=1;
		}
	}
}

int main(){
	sang();
	string s;
	while(cin>>s){
		if(s=="0") return 0;
		int max=0;
		for(int i=0;i<s.size();i++){
			for(int j=i;j<i+6;j++){
				string tmp = s.substr(i, j-i+1);
				int t = stoi(tmp);
				if(nt[t]==0 && t>max && t<=100000 ) max=t;
			}
		}
		cout<<max<<'\n';
	}
}