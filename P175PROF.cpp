#include <bits/stdc++.h>
#define ll long long
using namespace std;

// quy luat cua day la so luong x luon khac y va kq la luong chech lech
int main() {
	int a;
	cin>>a;
	while(a--) {
		string s;
		cin>>s;
		int x=0, y=0;
		for(char v : s) {
			if(v=='x') x++;
			else y++;
		}
		if(x>y) {
			while(x>y) {
				cout<<'x';
				x--;
			}
		} 
		else {
			while(x<y) {
				cout<<'y';
				y--;
			}
		}
		cout<<'\n';
	}
}