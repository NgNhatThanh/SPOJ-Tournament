#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <deque>

using namespace std;

int check(int n) {
	while(n) {
		if(n!=1 && n%2!=0) return 0;
		n/=2;
	}
	return 1;
}

int main() {
	int n;
	cin>>n;
	deque<int> v;
	if(check(n)) cout<<n<<" 0";
	else {
		while(n) {
			int tmp = n%2;
			v.push_back(tmp);
			n/=2;
		}
		int res = pow(2,v.size());
		while(v.back()==0) v.pop_back();
		while(v.front()==0) v.pop_front();
		cout<<res<<" "<<v.size();
	}
}