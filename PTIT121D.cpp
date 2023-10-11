#include <bits/stdc++.h>
#define ll long long
using namespace std;

int mo[30];
int n, k;

void sang() {
	mo[0]=3;
	mo[1]=10;
	int k=5;
	for(int i=2; i<=27; i++) {
		mo[i]=2*mo[i-1]+k;
		k++;
	}
}

int find(int a) {
	for(int i=0; i<=27; i++) {
		if(a<=mo[i]) return i;
	}
}

char quay(int i, int n) {
	if(i==0) {
		if(n==1) return 'm';
		return 'o';
	}
	int tmp=mo[i-1];
	if(n>tmp && n<=tmp+i+3) {
		if(n-tmp==1) return 'm';
		return 'o';
	} else if(n<=tmp) return quay(i-1, n);
	else if(n>tmp+i+3)  return  quay(i-1, n-(tmp+i+3));
}

int main() {
	sang();
	int n;
	cin>>n;
	int idx=find(n);
	char res=quay(idx, n);
	cout<<res;
	//cout<<idx;
}