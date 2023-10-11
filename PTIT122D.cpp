#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		int arr[27];// gia tri dung de tinh toan
		int pos[27];// gia tri sau khi ket thuc tinh toan
		int appear[27]= {};
		for(int i=1; i<=26; i++) {
			arr[i]=i;
			pos[i]=i;
		}
		stack<char> st;
		string hauto="";
		// chuyen doi thanh bieu thuc hau to
		for(int i=0; i<s.size(); i++) {
			if(isalpha(s[i])) {
				appear[s[i]-96]=1;
				int ok=0;
				if(i>=2 && s[i-1]==s[i-2]) {
					if(s[i-1]=='+') {
						arr[s[i]-96]++;
						pos[s[i]-96]++;
					} else if(s[i-1]=='-') {
						arr[s[i]-96]--;
						pos[s[i]-96]--;
					}
				} else if(i<=s.size()-3 && s[i+1]==s[i+2]) {
					ok=1;
					if(s[i+1]=='+') pos[s[i]-96]++;
					else if(s[i+1]=='-') pos[s[i]-96]--;
					i+=2;
				}
				if(!ok) hauto+=s[i];
				else hauto+=s[i-2];
			} else {
				if(i<=s.size()-3 && isalpha(s[i+2])) i++;
				else {
					while(st.size()) {
						hauto+=st.top();
						st.pop();
					}
					st.push(s[i]);
				}
			}
		}
		while(st.size()) {
			hauto+=st.top();
			st.pop();
		}
		stack<int> res;
		for(char x : hauto) {
			if(isalpha(x)) res.push(arr[x-96]);
			else {
				int t1=res.top();
				res.pop();
				int t2=res.top();
				res.pop();
				if(x=='-') res.push(t2-t1);
				else res.push(t1+t2);
			}
		}
		cout<<"Expression: "<<s<<'\n';
		cout<<"value = "<<res.top()<<'\n';
		for(int i=1; i<=26; i++) {
			if(appear[i]) cout<<(char)(i+96)<<" = "<<pos[i]<<'\n';
		}
	}
}