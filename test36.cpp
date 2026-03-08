//<---> Everything will be something that you've seen before, Don't panic. <--->
//For my Mother and Departed Father

#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
#define nl '\n'
using namespace std;
const int N = 1e9;

void thirtysix(){
  int n; cin >> n;
  int a[n];
  for(int i = 0; i < n; i++)
    cin >> a[i];
  int one_count = 0, two_count = 0, sum = 0;
  for(int i = 0; i < n; i++){
    if(a[i] == 1) one_count++;
    else two_count++;
    sum += a[i];
  }
  if(sum % 2){
    cout << "NO" <<nl;
  }
  else{
    if(one_count >= 1 or two_count % 2 == 0) cout << "YES" << nl;
    else cout << "NO" << nl;
  }
}

int32_t main(){
  fast();
  int tc; cin >> tc;
  while(tc--){
    thirtysix();
  }
}
