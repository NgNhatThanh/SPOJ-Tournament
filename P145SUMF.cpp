#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
 
void change(char &kt){
	if(kt=='X') kt='.';
	else kt='X';
}
 
int main() {
	int r, c, a, b;
	cin>>r>>c>>a>>b;
	char kt='X';
	char st='X';
	for(int i=0;i<r;i++){
		kt=st;
		for(int j=0;j<a;j++){
			kt=st;
			for(int k=0;k<c;k++){
				for(int z=0;z<b;z++){
					cout<<kt;	
				}
				change(kt);
			}
			cout<<'\n';
		}
		change(st);
	}
} 