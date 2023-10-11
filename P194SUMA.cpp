#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int n, k;
	cin>>n>>k;
	int arr[n];
	vector<int> am;
	vector<int> duong;
	ll sum=0;
	int ok=0;
	for(int &x : arr) {
		cin>>x;
		sum+=x;
		if(x<0) am.push_back(x);
		else if(x>0) duong.push_back(x);
		else ok=1;
	}
	int tmp = am.size();
	if(ok) k = min(k, tmp);
	while(k>0) {
		sort(am.begin(), am.end(), greater<int>());
		while(am.size()>0 && k>0) {
			sum+=2*(am.back()*-1);
			k--;
			duong.push_back(am.back()*-1);
			am.pop_back();
		}
//cout<<am.front()<<'\n';
		sort(duong.begin(), duong.end(), greater<int>());
		while(duong.size()>0 && k>0) {
			sum-=2*duong.back();
			am.push_back(duong.back()*-1);
			duong.pop_back();
			k--;
		}
//cout<<duong.front()<<'\n';

	}
	cout<<sum;

}