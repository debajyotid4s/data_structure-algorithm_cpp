#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
long long memo[1001];
using namespace std;


ll pow_of_two(int n){
  if(n == 0){
    return 1;
  }
  if(memo[n] != -1){
    return memo[n];
  }
  return memo[n] = pow_of_two(n - 1) + pow_of_two(n - 1);
}

int32_t main(){
  fast();
  ll n;
  cin >> n;
  for(ll i = 0; i <= n; i++){
    memo[i] = -1;
  }

  cout << pow_of_two(n) <<'\n';

  return 0;
}
