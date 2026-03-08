#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
long long memo[51];
using namespace std;

ll get_fibo(int n){
	if(n == 0) return 0;
	if(n == 1) return 1;
	if(memo[n] != -1) return memo[n];

	memo[n] = get_fibo(n - 1) + get_fibo(n - 2);
	return memo[n];

}

int32_t main(){
  fast();
  int n; cin >> n;
  for(int i = 0; i <= 51; i++){
  	memo[i] = -1;
  }

  cout << get_fibo(n - 1) <<'\n';

  return 0;
}
