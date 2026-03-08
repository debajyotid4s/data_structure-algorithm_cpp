//<---> Everything will be something that you've seen before, Don't panic. <--->
//For my Mother and Departed Father

#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
using namespace std;
const int N = 1e9;

int32_t main(){
  fast();
  int tc; cin >> tc;
  while(tc--){
    string s; cin >> s;
    string given = "ADVITIYA";

    int steps = 0;
    if(s == given) cout << 0 <<'\n';
    else{
      for(int i = 0; i < s.size(); i++){
        if(s[i] != given[i]){
          steps += (given[i] - s[i] + 26) % 26;
        }
      }
      cout << steps <<'\n';
    }
  
  }
}
