//Hare Krishna <---> Everything will be something that you've seen before, Don't panic.
//For my Mother and Departed Father

#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
using namespace std;

int32_t main(){
  fast();
  int a[5];
  for(int i = 0; i < 5; i++)
    cin >> a[i];
  int count = 0;
  for(int i = 0; i < 4; i ++){
    if(a[i] > a[i+ 1]){
      count++;
    }
  }
  if(count == 1) cout << "Yes" <<'\n';
  else cout << "No" <<'\n';
}
