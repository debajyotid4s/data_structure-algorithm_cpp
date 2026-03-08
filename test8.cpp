#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
using namespace std;

int32_t main(){
  fast();
  int tc; cin >> tc;
  while(tc--){
    int n, k, x; cin >> n >> k >> x;

    if(x != 1){
      cout << "YES" <<'\n';
      cout << n <<'\n';
      for(int i = 0; i < n; i++){
        cout << 1 << ' ';
      }
      cout << '\n';
    }
    else{
      if(k == 1){
        cout << "NO" <<'\n';
      }
      else{
        if(!(n % 2)){
          cout << "YES" <<'\n';
          cout << n / 2 <<'\n';
          for(int i = 0; i < n / 2; i++){
            cout << 2 <<' ';
          }
          cout << '\n';
        }
        else{
          if(k >= 3){
            cout << "YES" <<'\n';
            cout << n / 2 <<'\n';
            for(int i = 0; i < ((n / 2) - 1); i++){
              cout << 2 <<'\n';
            }
            cout << 3 <<'\n';
            cout << '\n';
          }
          else cout << "NO" <<'\n';
        }
      }
    }
  }
  return 0;
}
