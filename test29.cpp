#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
using namespace std;

int32_t main(){
  fast();
  int tc; cin >> tc;
  while(tc--){
    int a, b, c, x; cin >> a >> b >> c;

    if(abs(b - a) == abs(c - b)) cout << "YES" <<'\n';
    else{
      x = max(a, max(b, c));
      for(int i = 1; i <= x; i++){
        
      }
    }
    //cout << x << '\n';
  }
  return 0;
}
