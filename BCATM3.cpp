#include <iostream>
using namespace std;

int n;
int res=1e9;
int arr[]= {500,200,100,50,20,10,5,2,1};

int check(int n) {
	for(int x : arr) {
		if(n==x) return 1;
	}
	return 0;
}

void Try(int i, int sum=0, int cnt=0) {
	if(sum==n) {
		if(cnt<res) res=cnt;
		return;
	}
	if(i>=9 || sum>n || cnt>=res || n-sum<arr[i]) return;
	if(check(n-sum)) {
		res=min(res,cnt+1);
		return;
	}
	for(int j=0; j<9; j++) {
		int tmp = (n-sum)/arr[i];
		Try(j, sum+arr[i]*tmp, cnt+tmp);
	}
}

int main() {
	int a;
	cin>>a;
	while(a--) {
		cin>>n;
		res=1e9;
		for(int i=0; i<9; i++) Try(i);
		cout<<res<<'\n';
	}
}