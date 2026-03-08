#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
using namespace std;

int32_t main(){
  fast();
  int tc; cin >> tc;
  while(tc--){
    int x, k; cin >> x >> k;
    

    if(x % k) {
          cout << 1 <<'\n';
          cout << x <<'\n';
    }
    else{
      cout << 2 <<'\n';
      cout << x - 1 << ' ' << 1 <<'\n';
     }
  }
  return 0;
}
