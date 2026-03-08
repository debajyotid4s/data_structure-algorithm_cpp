#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
using namespace std;

bool isBinaryRepresentationPalindrome(int n){
  string s = "";
  while(n){
    if(n % 2 == 0) s += '0';
    else s += '1';

    n = n / 2;
  }

  for(int i = 0; i < s.size(); i++){
    if(s[i] != s[s.size() - i - 1]){
      return false;
      break;
    }
  }
  return true;
}

bool WonderfulChecker(int n){
  if(n % 2) return true;
  return 0;
}
int32_t main(){
  fast();
  int n; cin >> n;

  bool isWonderful = WonderfulChecker(n);
  bool isPalindrome = isBinaryRepresentationPalindrome(n);

  if(isWonderful and isPalindrome) cout << "YES" <<'\n';
  else cout << "NO" <<'\n';
}
