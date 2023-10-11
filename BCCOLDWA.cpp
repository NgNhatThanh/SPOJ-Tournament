#include <iostream>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
#define maxn 100005

int height[maxn];
int n, c;

pair<int, int> ong[maxn];

void duyet(int u){
  if(!u) return;
  height[ong[u].first] = height[ong[u].second] = height[u] + 1;
  duyet(ong[u].first);
  duyet(ong[u].second);
}

int main() 
{
  faster()
  cin >> n >> c;
  int x, y, z;
  while(c--){
    cin >> x >> y >> z;
    ong[x] = {y, z};
  }
  height[1] = 1;
  duyet(1);
  for(int i=1; i<=n; ++i) cout << height[i] << '\n';
}