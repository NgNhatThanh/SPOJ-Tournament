#include <bits/stdc++.h>
#define ll long long
using namespace std;
char arr[105][105];
string res[105][105];

char gt(int n) {
	if(n<10) return (char)(n+48);
	switch (n) {
		case 10:
			return 'A';
		case 11:
			return 'B';
		case 12:
			return 'C';
		case 13:
			return 'D';
		case 14:
			return 'E';
		case 15:
			return 'F';
	}
}

int main() {
	int n;
	cin>>n;
	for(int i=0; i<n+3; i++) res[0][i]="0";
	for(int i=0; i<n+3; i++) res[i][0]="0";
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			cin>>arr[i][j];
			res[i][j]=max(res[i-1][j], res[i][j-1])+arr[i][j];
		}
	}
	string np=res[n][n];
	reverse(np.begin(), np.end());
	string tlp="";
	int len =np.size();
	for(int i=0; i<len; i++) {
		int k=0;
		int cnt=0;
		for(int j=i; j<min(i+4,len); j++) {
			cnt+=(np[j]-48)*pow(2,k);
			k++;
		}
		tlp+=gt(cnt);
		i+=3;
	}
	while(tlp.back()=='0' && tlp.size()>1) tlp.pop_back();
	reverse(tlp.begin(), tlp.end());
	cout<<tlp;
}