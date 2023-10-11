#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(){
	int x, y, n;
	cin>>x>>y>>n;
	int tmp = y-x;
	int xet = n%6;
	if(xet==3) cout<<tmp;
	else if(xet==1) cout<<x;
	else if(xet==2) cout<<y;
	else if(xet==4) cout<<x*-1;
	else if(xet==5) cout<<y*-1;
	else cout<<tmp*-1;
}