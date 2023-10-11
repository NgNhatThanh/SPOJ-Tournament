#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void doiluot(int &st){
	if(st==8) st=1;
	else st++;
}

int main() {
	int st, n;
	cin>>st>>n;
	int time = 210;
	while(n--){
		int a;
		char kq;
		cin>>a>>kq;
		if(time-a<=0){
			cout<<st;
			return 0;
		}
		else time-=a;
		if(kq=='T') doiluot(st);
	}
}