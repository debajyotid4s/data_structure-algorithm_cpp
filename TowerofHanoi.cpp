//Everything will be something that you've seen before, Don't panic.
//For my Mother and Departed Father

#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
#define nl '\n'
using namespace std;
const int N = 1e9;

void TowerOfHanoi(int n, char from_rod, char dest_rod, char aux_rod) {
    if (n == 1) {
        cout << "Move disk 1 from " << from_rod << " to " << dest_rod << endl;
        return;
    }
    TowerOfHanoi(n - 1, from_rod, aux_rod, dest_rod);
    cout << "Move disk " << n << " from " << from_rod << " to " << dest_rod << endl;
    TowerOfHanoi(n - 1, aux_rod, dest_rod, from_rod);
}


void thirteen(){
    int n; cin >> n;
    TowerOfHanoi(n, 'A', 'B', 'C');
}

int32_t main(){
    fast();
    //int tc; cin >> tc;
    //while(tc--){
        thirteen();
    //}
}
