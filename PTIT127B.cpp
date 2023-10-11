#include <iostream>
#define fast() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;

int main() {
	fast()
	int n;
	cin>>n;
	string s;
	cin>>s;
	int check1[27]= {};
	int check2[27]= {};
	for(char x : s) {
		++check1[x-96];
		++check2[x-96];
	}
	string a="", b="";
	a+=s.back();
	check2[s.back()-96]--;
	check1[s.back()-96]--;
	s.pop_back();
	int turn=2;
	while(s.size()) {
		if(turn==2) {
			turn=1;
			for(int i=1; i<=26; i++) {
				if(check2[i]) {
					check2[i]--;
					b+=(char)(i+96);
					break;
				}
			}
		} else {
			turn=2;
			// neu check1!=check2 co nghia chu do da duoc B lay roi nen A khong duoc lay nua
			while(s.size() && check1[s.back()-96]!=check2[s.back()-96]) {
				check1[s.back()-96]--;
				s.pop_back();
			}
			if(s.size()) {
				check1[s.back()-96]--;
				check2[s.back()-96]--;
				a+=s.back();
				s.pop_back();
			}
		}
	}
	if(b<a) cout<<"DA\n";
	else cout<<"NE\n";
	cout<<b;
}