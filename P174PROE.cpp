#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	set<int> se;
	for(int &x : arr) {
		cin>>x;
	}
	sort(arr, arr+n);
	int st=arr[0];
	int k=0;
	int ok=0;
	int cnt=1; // dem day cap so cong
	int check=1;
	for(int i=1; i<n; i++) {
		if(arr[i]!=st) {
			if(!ok) {
				ok=1;
				k=arr[i]-st;
				st=arr[i];
				cnt++;
			} else {
				if(arr[i]-st!=k) check=0;
				else {
					cnt++;
					st=arr[i];
				}
			}
		}
	}
	if(cnt>3 || check==0) cout<<"NO";
	else cout<<"YES";
}