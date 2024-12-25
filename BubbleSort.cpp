#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
using namespace std;

void BubbleSort(int a[], int n){
	for(int i = 0; i < n - 1; i++){
		for(int j = 0; j < n - i - 1; j++){
			if(a[j] > a[j + 1]){
				swap(a[j], a[j + 1]);
			}
		}
	}
}

int32_t main(){
  fast();
  int n; cin >> n;
  int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];

  BubbleSort(a, n);

	for(int i = 0; i < n; i++){
		cout << a[i] <<' ';
	}
}
