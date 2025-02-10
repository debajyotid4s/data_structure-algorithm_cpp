#include<bits/stdc++.h>
#define N 1000
using namespace std;

double greedyKnapSack(int profit[], int weigth[], int capacity, int n){
    
}

int main(){
    int n, capacity;
    cin >> n >> capacity;

    int profit[n], weigth[n];

    for(int i = 0; i < n; i++){
        cin >> profit[i];
        cin >> weight[i];
    }

    cout << "Maximum Profit: " << greedyKnapSack(profit, weigth, capacity, n) << '\n';
    return 0;
}
