#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
using namespace std;

int32_t main(){
  fast();
  int a, b; cin >> a >> b;
  int x[a][b], y[a][b];
  for(int i = 0; i < a; i++){
    for(int j = 0; j < b; j++){
      cin >> x[i][j];
    }
  }
  for(int i = 0; i < a; i++){
    for(int j = 0; j < b; j++){
      cin >> y[i][j];
    }
  }

  solve(x, y, a, b);
  return 0;
}
