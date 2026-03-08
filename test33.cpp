//Hare Krishna <---> Everything will be something that you've seen before, Don't panic.
//For my Mother and Departed Father

#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
using namespace std;

int32_t main(){
  fast();
  string s; cin >> s;
  sort(s.begin(), s.end());
  char x;
  bool ok = true;
  for(int i = 1; i < s.size() - 1; i++){
    if((s[i + 1] - s[i]) <= 1) continue;
    else {
      x = s[i] + 1;
      ok = false;
      break;
    }
  }
  if(ok) cout << "None" <<'\n';
  else cout << x <<'\n';
}
