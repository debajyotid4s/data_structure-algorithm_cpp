#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define test() int t; cin >> t; while(t--)
#define ll long long

using namespace std;

int32_t main(){

  fast();
  int tc; cin >> tc;
  while(tc--){
    int a, b , c , d;
    cin >> a >> b >> c >> d;
    if((a+b) < (c+d)) cout << "YES" <<'\n';
    else cout << "NO" <<'\n';
  }
  
  
  return 0;
}
