//Hare Krishna <---> Everything will be something that you've seen before, Don't panic.
//For my Mother and Departed Father

#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
using namespace std;

int32_t main(){
  fast();
  int N; cin >> N;
  int d[N];
  for (int i = 1; i < N; i++) {
        for(int j = i; j < N; j += i) {
            d[j]++;
            cout << d[j];
        }
    }
  
}
