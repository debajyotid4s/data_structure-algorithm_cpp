#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
using namespace std;
int n, a[1001];
bool is_taken[1001];

void subSeq(int position){
  if(position > n){
    for(int i = 1; i <= n; i++){
      if(is_taken[i]){
        cout << a[i] << ' ';
      }
    }
    cout << '\n';
    return;
  }

  is_taken[position] = false;
  subSeq(position + 1);

  is_taken[position] = true;
  subSeq(position + 1);
}


int32_t main(){

  fast();
  cin >> n;
  for(int i = 1; i <= n; i++){
    cin >> a[i];
  }
  subSeq(1);

  return 0;
}
