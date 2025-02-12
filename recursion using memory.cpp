#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
long long memo[1001];
using namespace std;


long long get_fibo(int n){
  if(n == 0 or n == 1){
    return n;
  }
  if(memo[n] != -1){
    return memo[n];
  }
  return memo[n] = get_fibo(n-1) + get_fibo(n-2);
}

int32_t main(){
  fast();
  int n = 69;
  memset(memo, -1, 1001);

  cout << get_fibo(n) <<'\n';

  return 0;
}
