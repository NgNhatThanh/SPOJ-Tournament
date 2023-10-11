#include <bits/stdc++.h>
 
using namespace std;
 
stack<int> v;
 
int main() {
	int a;
	string s;
	while(getline(cin, s)){
		if(s=="end") return 0;
		if(s=="init"){
			while(!v.empty()){
				v.pop();
			}
		}
		else if(s[1]=='u'){
			stringstream ss(s);
			string tmp;
			while(ss >> tmp);
			a = stoi(tmp);
			v.push(a);
		}
		else if(s=="pop"){
			if(!v.empty()) v.pop();
		}
		else if(s=="top"){
			if(!v.empty()) cout << v.top() << '\n';
			else cout << "-1\n";
		}
		else if(s=="size") cout << v.size() << '\n';
		else if(s=="empty") cout << v.empty() << '\n';
	}
}  