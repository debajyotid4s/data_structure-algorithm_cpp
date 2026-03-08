#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
using namespace std;

int32_t main(){
  fast();
    ll a, b, c; 
    while(cin >> a >>b >> c){
      if(a == 0 and b == 0 and c == 0) break;
      if(abs(b - a) == abs(c - b)) {
          cout << "AP" <<' ';
          cout << c + (b - a) <<'\n';
    
      }
      else {
        cout << "GP" <<' ';
        cout << c * (b / a) <<'\n';
    
      }
    }
  return 0;
}
