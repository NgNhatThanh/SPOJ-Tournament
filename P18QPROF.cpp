#include <iostream>

using namespace std;

int cnt[30][50010];
string s;
int a,b,c,d;

void process() {
	for(int i=1; i<=s.size(); i++) {
		for(int j=1; j<=26; j++) {
			cnt[j][i]=cnt[j][i-1];
			if(s[i-1]==j+96) cnt[j][i]++;
		}
	}
}

bool check() {
	for(int i=1; i<=26; i++) {
		int t1 = cnt[i][b]-cnt[i][a];
		if(cnt[i][a]>cnt[i][a-1]) t1++;
		int t2=cnt[i][d]-cnt[i][c];
		if(cnt[i][c]>cnt[i][c-1]) t2++;
		if(t1!=t2) return 0;
	}
	return 1;
}

int main() {
	cin>>s;
	process();
	int n;
	cin>>n;
	while(n--) {
		cin>>a>>b>>c>>d;
		if(check()) {
			cout<<"YES\n";
		} else cout<<"NO\n";
	}
}