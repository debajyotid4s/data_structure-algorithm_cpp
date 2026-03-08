#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;

int palinNum(int a[], int n) {
    int count = 0;
    
    for (int i = 0; i < n; i++) {
    	if(a[i] < 10) {
    		count++;
    	}
    	else{
        	string s = to_string(a[i]);
        	bool is_palindrome = true;
        	for(int j = 0; j < s.size(); j++){
        		if(s[j] != s[s.size() - j - 1]){
        			is_palindrome = false;
        			break;
        	}
        }
        if(is_palindrome) count++;
    	}
    }
  return count;
}

bool is_prime(int n){
	if(n == 1) return false;
	for(int i = 2; i < n; i++){
		if(n % i == 0) return false;
	}
	return true;
}

int primeNum(int a[], int n){
	int count = 0;
	for(int i = 0; i < n; i++){
		if(is_prime(a[i])) count++;
	}
	return count;
}

int minimumNum(int a[], int n) {
    int minNum = INT_MAX;
    for (int i = 0; i < n; i++) {
        minNum = min(a[i], minNum);
    }
    return minNum;
}

int maximumNum(int a[], int n) {
    int maxNum = INT_MIN;
    for (int i = 0; i < n; i++) {
        maxNum = max(a[i], maxNum);
    }
    return maxNum;
}

int divisorCounter(int x){
	int count = 0;
	for(int i = 1; i <= x; i++){
		if(x % i == 0) count++; 
	}
	return count;
}

int maxDivisor(int a[], int n) {
    int max_div = 0;
    int number = 0;
    for(int i = 0; i < n; i++){
    	int hasMaxDiv = divisorCounter(a[i]);
    	if(hasMaxDiv > max_div){
    		max_div = hasMaxDiv;
    		number = a[i];
    	}
    }
    return number;
}

int32_t main() {
    fast();
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    cout << "The maximum number : " << maximumNum(a, n) << '\n';
    cout << "The minimum number : " << minimumNum(a, n) << '\n';
    cout << "The number of prime numbers : " << primeNum(a, n) << '\n';
    cout << "The number of palindrome numbers : " << palinNum(a, n) << '\n';
    cout << "The number that has the maximum number of divisors : " << maxDivisor(a, n) << '\n';

    return 0;
}
