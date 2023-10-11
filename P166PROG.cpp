#include <bits/stdc++.h>

using namespace std;

int check(char a, char b){
	int t = a+48, v = b+48;
	return min({abs(t-v), 10-a+b, 10-b+a});
}

int main() {
	int n;
	cin>>n;
	string t1, t2;
	cin>>t1>>t2;
	int res=0;
	for(int i=0;i<t1.size();i++){
		res+=check(t1[i], t2[i]);
	}
	cout<<res;
}