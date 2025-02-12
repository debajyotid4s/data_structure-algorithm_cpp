#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long

using namespace std;
ll get_fact(int n){
  if(n == 0){
    return 1;
  }
  return get_fact(n-1) * n;
  
}
int32_t main(){

   fast();
   int n; cin >> n;
   cout << get_fact(n) <<'\n';
    
  return 0;
}
