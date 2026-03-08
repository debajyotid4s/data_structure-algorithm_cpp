#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
using namespace std;

int32_t main(){
  fast();
  ll a, b;
  cin >> a >> b;
  ll gcd = 0;

  ll x = min(a, b);
  if((a % x == 0) and (b % x == 0)) gcd = x;
  else{
  	while(x > 1){
  		if((a % x == 0) and (b % x == 0)) {
  			gcd = x;
  			break;
  		}
  		else x--;
  	}
  }
  cout << (a * b) / gcd <<'\n';//lcm of a and b
}
