#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long

using namespace std;
int get_sum(int n){
  if(n == 0){
    return 0;
  }
  int res = 0;
  res = get_sum(n - 1) + n;
  return res;
}
int32_t main(){

   fast();
   cout << get_sum(69) <<'\n';

  return 0;
}
