#include <iostream>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
#define maxn 10005

int par[maxn], sz[maxn];

int find(int u){
  if(u == par[u]) return u;
  return par[u] = find(par[u]);
}

void join(int u, int v){
  u = find(u); v = find(v);
  if(u == v) return;
  if(sz[u] < sz[v]) swap(u, v);
  sz[u] += sz[v];
  par[v] = u;
}

int main() 
{
  faster()
  for(int i=1; i<maxn; ++i){
    par[i] = i;
    sz[i] = 1;
  }
  int q;
  cin >> q;
  while(q--){
    int a, x, y;
    cin >> x >> y >> a;
    if(a == 1) join(x, y);
    else{
      x = find(x); y = find(y);
      cout << (x == y) << '\n';
    }
  }
}