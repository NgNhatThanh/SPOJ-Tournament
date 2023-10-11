#include <iostream>
#include <algorithm>
using namespace std;

int ngay(int n){
  switch (n){
    case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12: return 31;
    case 4 : case 6 : case 9 : case 11 : return 30;
    default: return 28;
  }
}

int main() 
{
   int x,y;
   cin>>x>>y;
   int day = ngay(x);
   int cnt=1;
   day-=(8-y);
   cnt+=day/7;
   if(day%7) cnt++;
   cout<<cnt;
}