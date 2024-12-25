#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
using namespace std;

void selectionSort(int a[], int n){
	for(int i = 0; i < n - 1; i++){
		int min_index = i;
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[min_index]){
				min_index = j;
			}
		}
		swap(a[i], a[min_index]);
	}
}

int32_t main(){
  	fast();
  	int n; cin >> n;
  	int a[n];
  	for(int i = 0; i < n; i++) cin >> a[i];

  	selectionSort(a,n);
	cout << "sorted array: " <<'\n';
	for(int i = 0; i < n; i++){
		cout<< a[i] <<' ';
	}
}
