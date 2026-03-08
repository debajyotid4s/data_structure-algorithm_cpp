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
    int n, x; cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; i++)
      cin >> a[i];

    sort(a, a + n);
    int ans = a[n - 1];
    for(int i = 0; i < n; i++){
      a[n - 1] = 0;
      a[i] = a[i] + (x * i);
      
    }

    cout << ans << '\n';
  }
  cerr << "Execution time: " << 1000.f * clock() / CLOCKS_PER_SEC << " ms." << '\n';
}
