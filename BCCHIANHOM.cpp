#include <iostream>
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int n,k;
int arr[20];
int pre[20];
int chia;
int res=0;

void solve(int i, int cnt=1) {
	if(cnt==k) {
		if(i==n-1) res++;
		return;
	}
	for(int j=i+1; j<n; j++) {
		if(pre[j]-pre[i]==chia) solve(j, cnt+1);
	}
}

int main() {
	cin>>n>>k;
	cin>>arr[0];
	pre[0]=arr[0];
	int sum=arr[0];
	for(int i=1; i<n; i++) {
		cin>>arr[i];
		sum+=arr[i];
		pre[i]=arr[i]+pre[i-1];
	}
	chia=sum/k;
	if(sum%k) cout<<0;
	else {
		for(int i=0; i<=n-k; i++) solve(i);
		cout<<res;
	}
}