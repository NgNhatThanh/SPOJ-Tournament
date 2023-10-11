#include <iostream>
#include <cstring>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	int res=0;
	int arr[n];
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	bool vst[n+5];
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			if(j==i) continue;
			memset(vst, false, sizeof(vst));
			vst[i]=true;
			vst[j]=true;
			int t1=arr[i], t2=arr[j];
			int cnt=2;
			bool ok=1;
			while(ok) {
				ok=0;
				for(int k=0; k<n; k++) {
					if(vst[k]) continue;
					if(arr[k]==t1+t2) {
						vst[k]=true;
						cnt++;
						ok=1;
						t1=t2;
						t2=arr[k];
					}
				}
			}
			if(cnt>res) res=cnt;
		}
	}
	cout<<res;
}