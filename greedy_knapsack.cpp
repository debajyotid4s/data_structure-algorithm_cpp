#include<bits/stdc++.h>
#define N 1000
using namespace std;

struct Item {
    int value, weight;
    double ratio;
};

bool compare(Item a, Item b) {
    return a.ratio > b.ratio;
}

int main() {
    int n, m; 
    cin >> n >> m;
    int profit[n], weight[n];

    double x[n];
    for(int i = 0; i < m; i++){
        x[i] = 0.0;
    }
    
    vector<Item> items(n);

    for (int i = 0; i < n; i++) {
        cin >> profit[i] >> weight[i];
        items[i].value = profit[i];
        items[i].weight = weight[i];
        items[i].ratio = (double)profit[i] / weight[i];
    }

    sort(items.begin(), items.end(), compare);
    
    int remaining_capacity = m;
    double total_profit = 0.0;

    for (int i = 0; i < n; i++) {
        if (items[i].weight <= remaining_capacity) {
            remaining_capacity -= items[i].weight;
            total_profit += items[i].value;
        } else {
            x[i] = (double)remaining_capacity / items[i].weight;
            total_profit += items[i].value * x[i];
            remaining_capacity = 0;
        }

        if (remaining_capacity == 0) break;
    }

    cout << "Maximum Profit: " << total_profit << endl;

    return 0;
}
