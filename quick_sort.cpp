//thirteen coded this...
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
#define nl '\n'
using namespace std;
const int N = 1e9;

void QuickSort(vector<int> &a){
	if(a.size() <= 1) return;
	int pivot = a[0];
	vector<int>l, r;

	for(int i = 1; i < a.size(); i++){
		if(a[i] < pivot){
			l.push_back(a[i]);
		}
		else{
			r.push_back(a[i]);

		}
	}
	QuickSort(l);
	QuickSort(r);
	a.clear();
	a.insert(a.end(), l.begin(), l.end());
	a.push_back(pivot);
	a.insert(a.end(), r.begin(), r.end());
	
}

int32_t main(){
    fast();
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; ++i)
        cin >> a[i];

    QuickSort(a);

    for(const auto &i : a)
        cout << i << ' ';
    cout << nl;
}