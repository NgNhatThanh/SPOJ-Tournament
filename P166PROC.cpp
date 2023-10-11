#include <bits/stdc++.h>
#define ll long long
using namespace std;

int tohop[105][105];

void cal(){
  for(int i=0;i<=100;i++){
    for(int j=0;j<=100;j++){
      if(j==i || i==0) tohop[i][j]=1;
      if(i>0){
        tohop[i][j]=tohop[i-1][j-1]+tohop[i][j-1];
      }
    }
  }
}

int main() {
  cal();
	int n;
	cin>>n;
	int cot[105]={}, hang[105]={};
	char arr[n][n];
	for(int i=0;i<n;i++){
	  for(int j=0;j<n;j++){
	    cin>>arr[i][j];
	    if(arr[i][j]=='C'){
	      hang[i]++;
	      cot[j]++;
	    }
	  }
	}
	ll res=0;
	for(int i=0;i<n;i++){
	  if(hang[i]>1) res+=tohop[2][hang[i]];
	  if(cot[i]>1) res+=tohop[2][cot[i]];
	}
	cout<<res;
} 