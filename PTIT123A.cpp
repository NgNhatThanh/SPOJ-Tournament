#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	while(getline(cin, s)) {
		if(s==".") return 0;
		for(int i=0; i<s.size(); i++) {
			if(s[i]==',' || s[i]=='.') s[i]=' ';
		}
		stringstream ss(s);
		string tmp;
		vector<string> v;
		while(ss>>tmp) {
			v.push_back(tmp);
		}
		for(int i=0; i<v.size(); i++) {
			for(int j=i+1; j<v.size(); j++) {
				if(v[i][0]>='a' && v[j][0]>='a') {
					if(v[i]>=v[j]) swap(v[i], v[j]);
				} 
				else if((v[i][0]=='-' || isdigit(v[i][0])) && (v[j][0]=='-' || isdigit(v[j][0]))) {
					int tmp = stoi(v[i]), tmp2 = stoi(v[j]);
					if(tmp>tmp2) swap(v[i], v[j]);
				}
			}
		}
		for(int i=0;i<v.size()-1;i++) cout<<v[i]<<", ";
		cout<<v[v.size()-1]<<"."<<'\n';
	}
}