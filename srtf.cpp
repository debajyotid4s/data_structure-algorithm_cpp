#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
#define nl '\n'
using namespace std;
const int N = 1e9;
int32_t main(){
    fast();
    int n; cin >> n;
    
    vector<int> at(n), bt(n), wt(n), tat(n), ct(n), rem_time(n), rt(n);
    vector<bool> started(n, false);
    
    for(int i = 0; i < n; i++){
        cin >> at[i];
    }
    
    for(int i = 0; i < n; i++){
        cin >> bt[i];
        rem_time[i] = bt[i];
    }
    
    int current_time = 0;
    int completed = 0;
    
    int earliest_at = *min_element(at.begin(), at.end());
    current_time = earliest_at;
    
    while(completed != n) {
        int shortest_remaining_time = -1;
        int selected_process = -1;
        for(int i = 0; i < n; i++) {
            if(at[i] <= current_time && 
               rem_time[i] > 0 && 
               rem_time[i] > shortest_remaining_time) {
                shortest_remaining_time = rem_time[i];
                selected_process = i;
            }
        }
        
        if(selected_process == -1) {
            int next_arrival_time = N;
            for(int i = 0; i < n; i++) {
                if(at[i] > current_time && rem_time[i] > 0 && at[i] < next_arrival_time) {
                    next_arrival_time = at[i];
                }
            }
            current_time = next_arrival_time;
        } else {
            if(!started[selected_process]) {
                rt[selected_process] = current_time - at[selected_process];
                started[selected_process] = true;
            }
            
            int run_time = rem_time[selected_process];
            
            for(int i = 0; i < n; i++) {
                if(i != selected_process && at[i] > current_time && at[i] < current_time + run_time && rem_time[i] > 0) {
                    run_time = at[i] - current_time; 
                }
            }
            
            current_time += run_time;
            rem_time[selected_process] -= run_time;
            
            if(rem_time[selected_process] == 0) {
                completed++;
                ct[selected_process] = current_time;
                tat[selected_process] = ct[selected_process] - at[selected_process];
                wt[selected_process] = tat[selected_process] - bt[selected_process];
            }
        }
    }
    
    double avg_waiting_time = 0, avg_turnaround_time = 0, avg_response_time = 0;
    
    cout << "\nP\tAT\tBT\tCT\tTAT\tWT\tRT" << nl;
    for(int i = 0; i < n; i++) {
        cout << "P" << i+1 << "\t"
             << at[i] << "\t"
             << bt[i] << "\t"
             << ct[i] << "\t"
             << tat[i] << "\t"
             << wt[i] << "\t"
             << rt[i] << nl;
             
        avg_waiting_time += wt[i];
        avg_turnaround_time += tat[i];
        avg_response_time += rt[i];
    }
    
    avg_waiting_time /= n;
    avg_turnaround_time /= n;
    avg_response_time /= n;
    
    cout << "\nAverage Waiting Time: " << fixed << setprecision(2) << avg_waiting_time << nl;
    cout << "Average Turnaround Time: " << fixed << setprecision(2) << avg_turnaround_time << nl;
    cout << "Average Response Time: " << fixed << setprecision(2) << avg_response_time << nl;
    
    return 0;
}