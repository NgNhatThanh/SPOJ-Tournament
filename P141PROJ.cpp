#include <iostream>
#include <cmath>
using namespace std;
 
int check(char a[][6]){
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(a[i][j]==a[i][j+1] && a[i][j]==a[i+1][j] && a[i][j]==a[i+1][j+1]) return 1;
		}
	}
	return 0;
}
 
void change(char a[][6], int i, int j){
	if(a[i][j]=='.') a[i][j]='#';
	else a[i][j]='.';
}
 
int main() {
    char a[6][6];
    for(int i=0; i<4; i++){
    	for(int j=0; j<4; j++) cin >> a[i][j];
	}
	if(check(a)) cout << "YES";
	else{
		for(int i=0; i<4; i++){
			for(int j=0; j<4; j++){
				change(a, i, j);
				if(check(a)){
					cout << "YES";
					return 0;
				}
				change(a, i, j);
			}
		}
		cout << "NO";
	}
} 