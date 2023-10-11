#include <bits/stdc++.h>

using namespace std;
int arr[1100005]={};

int main() {
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	s.pop_back();
	queue<int> v;
	for(int i=0;i<n;i++) v.push(i);
	for(int i=0;i<s.size();i++){
		if(s[i]=='A'){
			int tmp = v.front();
			v.pop();
			v.push(tmp);
		}
		else{
			v.pop();
			int tmp = v.front();
			v.pop();
			v.push(tmp);
		}
	}
//	int tmp;
//	while(k--){
//		tmp = v.front();
//		v.pop();
//	}
//	cout<<tmp<<" "<<v.front()<<" ";
//	v.pop();
//	cout<<v.front();
cout<<v.front();
}