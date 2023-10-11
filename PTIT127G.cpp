#include <bits/stdc++.h>
using namespace std;
 
void chuanhoa(string &s) {
	int k=0;
	while(s[k] == '0') k++;
	if(k >= s.size()) s="0";
	else {
		string tmp = "";
		for(int i=k; i<s.size(); i++) tmp += s[i];
		s=tmp;
	}
}
 
int cmp(string a, string b){
	if(a.size() == b.size()) return a<b;
	return a.size()<b.size();
}
 
int main() {
	int a;
	cin >> a;
	vector<string> v;
	while(a--) {
		string s;
		cin >> s;
		for(int i=0; i<s.size(); i++) {
			if(isdigit(s[i])) {
				string tmp="";
				for(int j=i; j<s.size(); j++) {
					if(!isdigit(s[j])) break;
					else tmp += s[j];
				}
				int tam = tmp.size();
				chuanhoa(tmp);
				v.push_back(tmp);
				i += tam;
			}
		}
	}
	sort(v.begin(), v.end(), cmp);
	for(string x : v) cout << x << '\n';
 
} 