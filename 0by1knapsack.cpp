#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0);

int main() {
    fast
    int KnapsackSize;
    cin >> KnapsackSize;
    int NumberOfItems;
    cin >> NumberOfItems;
    vector<int> weight(NumberOfItems), profit(NumberOfItems);
    for(int i = 0; i < NumberOfItems; i++){
        cin >> weight[i];
    }
    for(int i = 0; i < NumberOfItems; i++){
        cin >> profit[i];
    }
    int maxProfit = 0;
    vector<vector<int>> v(NumberOfItems + 1, vector<int>(KnapsackSize + 1, 0));
    
    for(int i = 1; i <= NumberOfItems; i++){
        for(int j = 1; j <= KnapsackSize; j++){
            if(weight[i - 1] <= j){
                v[i][j] = max(profit[i - 1] + v[i - 1][j - weight[i - 1]], v[i - 1][j]);
            }
            else v[i][j] = v[i - 1][j];
        }
    }
    int i = NumberOfItems,  k = KnapsackSize;
    while(i > 0 and k > 0){
        if(v[i][k] != v[i - 1][k]){
            maxProfit += profit[i - 1];
            k -= weight[i - 1];;
            i--;
        }
        else i--;
    }
    cout << maxProfit <<'\n';
    return 0;
}

/*
5 4
2 3 4 5 
3 4 5 6
*/
