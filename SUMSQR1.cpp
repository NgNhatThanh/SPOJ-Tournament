#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nhan(string &a, string b) {
	if(a.size()<b.size()) swap(a,b);
	vector<int> res(a.size()+b.size()+1,0);
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	int du=0;
	for(int i=0; i<b.size(); i++) {
		for(int j=0; j<a.size(); j++) {
			int t1=a[j]-48;
			int t2=b[i]-48;
			res[i+j]+=(t1*t2);
			if(res[i+j]>9) {
				res[i+j+1]+=res[i+j]/10;
				res[i+j]%=10;
			}
		}
	}
	if(du) res[a.size()+b.size()]=du;
	while(res.back()==0) res.pop_back();
	reverse(res.begin(), res.end());
	a.resize(res.size(),0);
	for(int i=0; i<res.size(); i++) {
		a[i]=res[i]+48;
	}
}

int main() {
	ll n;
	cin>>n;
	ll tmp1=n+1, tmp2=2*n+1;
	if(n%6==0) n/=6; // xu li phan nay de khong phai chia so nguyen lon
	else if(tmp1%6==0) tmp1/=6;
	else if(tmp2%6==0) tmp2/=6;
	else if((n*tmp1)%6==0) {
		tmp1=(n*tmp1)/6;
		n=1;
	} else if((n*tmp2)%6==0) {
		tmp2=(n*tmp2)/6;
		n=1;
	} else if((tmp1*tmp2)%6==0) {
		tmp1=(tmp1*tmp2)/6;
		tmp2=1;
	}
	string a=to_string(n);
	string b=to_string(tmp1);
	string c=to_string(tmp2);
	nhan(a,b);
	nhan(a,c);
	cout<<a;
}