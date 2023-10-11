#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int h,m,s;
	char tt[3];
	scanf("%d:%d:%d%s",&h, &m, &s, tt);
	if(h==12) {
		if(strcmp(tt, "AM")==0) h=0;
	} else {
		if(strcmp(tt, "PM")==0)  h+=12;
	}
	printf("%02d:%02d:%02d",h,m,s);
}