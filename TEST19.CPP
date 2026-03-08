#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
using namespace std;

int32_t main(){
  fast();
  int l; cin >> l;
  string s; cin >> s;
  
  vector<char>v;

  transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {
        return std::tolower(c);
    });

  sort(s.begin(), s.end());

  for(int i = 0; i < l; i++){
    if(s[i] != s[i + 1]){
      v.push_back(s[i]);
    }
  }
  bool ok = false;
  for(int i = 0; i < v.size(); i++){
    if(v[i] != v[i + 1] and v.size() >= 26){
      ok = true;
    }
  }
  // for(int i = 0; i < v.size(); i++){
  //   cout << v[i] <<' ';
  // }
  if(ok) cout << "YES" <<'\n';
  else cout << "NO" <<'\n';
}
