#include<bits/stdc++.h>
using namespace std;

int main(){
	int n = 3;
	int sum = 0;
	for(int i = 0; i < (1 << n); i++){
		for(int j = 0; j < n; j++){
			if(i & (1 << j)){
				sum += i;
			}
		}
	}
	cout << sum ;
}
