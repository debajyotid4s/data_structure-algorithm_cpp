//Hare Krishna <---> Everything will be something that you've seen before, Don't panic.
//For my Mother and Departed Father

#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
using namespace std;

int32_t main(){
  fast();
  int n, k; cin >> n >> k;
  int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];

  bool ok = true;
  int i = 1;
  sort(a, a + n);
  while(k > pow(i, 2) * a[0]){
      i++;
  }

  cout << i <<'\n';
}
