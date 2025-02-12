#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long

using namespace std;
int get_fibo(int n){
  if(n == 0) return 0;
  if(n == 1) return 1;
  return get_fibo(n - 1) + get_fibo(n - 2);
  
  
}
int32_t main(){

   fast();
   int n; cin >> n;
   cout << get_fibo(n - 1) <<'\n';
   cout << fabs(-6.5) <<'\n';
  return 0;
}
