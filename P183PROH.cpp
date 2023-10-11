#include <iostream>
#define ll long long
using namespace std;

int main() {
	int a,b,c;
	cin>>a>>b>>c;
	int a1[a], a2[b], a3[c];
	int s1=0, s2=0, s3=0;
	for(int &x : a1) {
		cin>>x;
		s1+=x;
	}
	for(int &x : a2) {
		cin>>x;
		s2+=x;
	}
	for(int &x : a3) {
		cin>>x;
		s3+=x;
	}
	int i=0, j=0, k=0;
	while(s1!=s2 || s1!=s3) {
		s1-=a1[i++];
		while(s2>s1) s2-=a2[j++];
		while(s3>s1) s3-=a3[k++];
	}
	cout<<s1;
}