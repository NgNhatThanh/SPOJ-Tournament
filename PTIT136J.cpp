#include <bits/stdc++.h>
using namespace std;

char arr[6][9];
    
int doc(int n, int l, int r){
    int cnt=0;
    char tmp = n+64;
    for(int i=l;i<r;i++){
      for(int j=0;j<6;j++){
        if(arr[j][i]!=tmp) cnt++;
      }
    }
    return cnt;
}

int ngang(int n, int l, int r){
  int cnt=0;
  char tmp = n+64;
  for(int i=l;i<r;i++){
    for(int j=0;j<9;j++){
      if(arr[i][j]!=tmp) cnt++;
    }
  }
  return cnt;
}

int count1(int i, int j, int k){
  int res = ngang(i,0,2)+ngang(j,2,4)+ngang(k,4,6);
  return res;
}

int count2(int i,int j, int k){
  int res = doc(i,0,3)+doc(j,3,6)+doc(k,6,9);
  return res;
}

int main() 
{
    for(int i=0;i<6;i++){
      for(int j=0;j<9;j++) cin>>arr[i][j];
    }
    int res=1e9;
    for(int i=1;i<=26;i++){
      for(int j=1;j<=26;j++){
        for(int k=1;k<=26;k++){
          if(j!=i && j!=k){
            int tmp = min(count1(i,j,k), count2(i,j,k));
            res=min(res, tmp);
          }
        }
      }
    }
    cout<<res;
}