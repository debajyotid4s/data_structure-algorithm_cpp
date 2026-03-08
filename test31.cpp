//Hare Krishna <---> Everything will be something that you've seen before, Don't panic.
//For my Mother and Departed Father

#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
using namespace std;

int32_t main(){
  fast();
  int tc; cin >> tc;
  while(tc--){
    int a, b, d, e; cin >> a >> b >> d >> e;
    
    int ans = 0;
    for(int i = -100; i <= 100; i++){
      int count = 0;
      if(a + b == i) count++;
      if(b + i == d) count++;
      if(i + d == e) count++;

      ans = max(ans, count);
    }
  cout << ans <<'\n';
  }
  cerr << "Execution time: " << 1000.f * clock() / CLOCKS_PER_SEC << " ms." << '\n';
}
