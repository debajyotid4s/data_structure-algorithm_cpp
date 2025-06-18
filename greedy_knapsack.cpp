//Everything will be something that you've seen before, Don't panic.
//For my Mother and Departed Father

#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
#define nl '\n'
using namespace std;
const int N = 1e9;

bool isPrime(ll n, ll i = 2) {
    if (n <= 1) return false;
    if (i * i > n) return true;
    if (n % i == 0) return false;
    return isPrime(n, i + 1);
}

void thirteen(){
	int number_of_items, max_capacity; cin >> number_of_items >> max_capacity;

	vector<pair<int, int>> items(number_of_items);
	vector<double> ratio(number_of_items);
	vector<int> index(number_of_items);
	double total_profit = 0.0;


	for(int i = 0; i < number_of_items; i++){
		cin >> items[i].first >> items[i].second;
		ratio[i] = (double)items[i].first / items[i].second;
		index[i] = i;
	}
	sort(index.begin(), index.end(), [&](int a, int b) {
        return ratio[a] > ratio[b];
    });

	for (int i = 0; i < number_of_items && max_capacity > 0; i++) {
        int idx = index[i];
        int profit = items[idx].first;
        int weight = items[idx].second;

        if (weight <= max_capacity) {
            max_capacity -= weight;
            total_profit += profit;
        } else {
            double fraction = (double)max_capacity / weight;
            total_profit += profit * fraction;
            max_capacity = 0;
        }
    }

    cout << "Maximum Profit: " << total_profit << endl;

}

int32_t main(){
    fast();
    //int tc; cin >> tc;
    //while(tc--){
        thirteen();
    //}
}


// input
// 3 20
// 25 18
// 24 15
// 15 10
