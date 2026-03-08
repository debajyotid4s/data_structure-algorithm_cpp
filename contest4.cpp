#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
using namespace std;

int32_t main(){
  fast();
  int tc; cin >> tc;
  while(tc--){
    int n; cin >> n;
    vector<int>rounded;
    int i = 1;

    while(n != 0){
      if(n % 10 != 0){
        rounded.push_back((n % 10)*i);
      }
      n /= 10;
      i *= 10;
    }

    cout << rounded.size()<<'\n';
    for(int i = 0; i < rounded.size(); i++){
      cout << rounded[i] <<' ';
    }
    cout << '\n';
  }
  return 0;
}
