#include <iostream>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);	
	int n;
	cin>>n;
	int arr[n+1];
	int idx=0;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		if(arr[i]==n) idx=i;
	}
	int cnt=0;
	int tmp = n;
	for(int i=idx;i>=1;i--){
		if(arr[i]==tmp){
			cnt++;
			tmp--;
		}
	}
	int res;	
	if(idx==1){
		res=n-cnt-1;
	}
	else res=n-cnt;
	cout<<res;
}  