#include <bits/stdc++.h>
#define ll long long
using namespace std;

int check(map<int, int> v){
	for(pair<int, int> x : v){
		if(x.second>=4) return 1;
	}
	return 0;
}

int main() {
	int arr[6];
	map<int, int> v;
	for(int &x : arr){
		cin>>x;
		v[x]++;
	}
	if(!check(v)) cout<<"Alien";
	else{
		int maxx=0;
		for(pair<int, int> x : v){
			maxx=max(maxx, x.second);
		}
		if(maxx==4){
			if(v.size()==2) cout<<"Elephant";
			else cout<<"Bear";
		}
		else if(maxx==6) cout<<"Elephant";
		else cout<<"Bear";
	}
}
