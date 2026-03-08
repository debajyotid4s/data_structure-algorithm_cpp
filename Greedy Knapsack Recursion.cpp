#include<iostream>
using namespace std;

const int N = 22;
int n, max_allowed_weight, max_value, weight[N], value[N];
/**
Basically we have n times. For each item we will either take it or we won't.
We will need to find a way of taking the items
so that the sum of weights of the items we have TAKEN inside the knapsack is <= max_allowed_weight
and the sum of weights of the items we have TAKEN inside the knapsack is as maximum as possible

 - item: the item we are currently at
 - total_weight: the sum of weights of the items we have TAKEN inside the knapsack
 - total_value: the sum of values of the items we have TAKEN inside the knapsack
**/
void solve(int item, int total_weight, int total_value) {
  if (item > n) { // base case: when we have moved passed all the items
    if (total_weight <= max_allowed_weight) {
      max_value = max(max_value, total_value);
    }
    return;
  }

  // now we can take this item or not

  // do not take this item
  solve(item + 1, total_weight, total_value);

  // take this item, add its weight and value
  solve(item + 1, total_weight + weight[item], total_value + value[item]);
}
int main() {
  cin >> n >> max_allowed_weight;
  for (int i = 1; i <= n; i++) {
    cin >> weight[i] >> value[i];
  }
  max_value = 0;
  solve(1, 0, 0); // start at the 1st item and currently we have 0 weight and 0 value
  cout << max_value << '\n';
  return 0;
}
