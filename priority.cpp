//thirteen coded this...
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
#define nl '\n'
using namespace std;
const int N = 1e9;


int32_t main(){
    fast();
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    vector<int> pid(n), arrival(n), burst(n), remaining(n), priority(n);
    vector<int> waiting(n, 0), turnaround(n, 0), completed(n, 0);
    vector<pair<int, int>> gantt; // {pid, time}

    cout << "Enter Arrival Time, Burst Time and Priority (lower number = higher priority):\n";
    for (int i = 0; i < n; ++i) {
        pid[i] = i + 1;
        cout << "Process " << pid[i] << ":\n";
        cout << "Arrival Time: ";
        cin >> arrival[i];
        cout << "Burst Time: ";
        cin >> burst[i];
        cout << "Priority: ";
        cin >> priority[i];
        remaining[i] = burst[i];
    }

    int time = 0, total_completed = 0;
    int last_pid = -1;

    while (total_completed < n) {
        int idx = -1;
        int highest_priority = 99999;

        for (int i = 0; i < n; ++i) {
            if (arrival[i] <= time && remaining[i] > 0) {
                if (priority[i] < highest_priority ||
                   (priority[i] == highest_priority && arrival[i] < arrival[idx])) {
                    highest_priority = priority[i];
                    idx = i;
                }
            }
        }

        if (idx != -1) {
            if (last_pid != pid[idx]) {
                gantt.push_back({pid[idx], time});
                last_pid = pid[idx];
            }

            remaining[idx]--;
            time++;

            if (remaining[idx] == 0) {
                completed[idx] = 1;
                turnaround[idx] = time - arrival[idx];
                waiting[idx] = turnaround[idx] - burst[idx];
                total_completed++;
            }
        } else {
            // CPU is idle
            if (last_pid != -2) {
                gantt.push_back({-1, time});
                last_pid = -2;
            }
            time++;
        }
    }

    // Gantt Chart
    cout << "\nGantt Chart:\n ";
    for (int i = 0; i < gantt.size(); ++i) {
        if (gantt[i].first == -1)
            cout << "IDLE ";
        else
            cout << "P" << gantt[i].first << " ";
    }
    cout << "\n" << gantt[0].second;
    for (int i = 1; i < gantt.size(); ++i)
        cout << setw(4) << gantt[i].second;
    cout << setw(4) << time;

    // Results
    float totalWT = 0, totalTAT = 0;
    cout << "\n\nProcess\tArrival\tBurst\tPriority\tWaiting\tTurnaround\n";
    for (int i = 0; i < n; ++i) {
        cout << "P" << pid[i] << "\t" << arrival[i] << "\t" << burst[i] << "\t"
             << priority[i] << "\t\t" << waiting[i] << "\t" << turnaround[i] << "\n";
        totalWT += waiting[i];
        totalTAT += turnaround[i];
    }

    cout << fixed << setprecision(2);
    cout << "Average Waiting Time: " << totalWT / n << "\n";
    cout << "Average Turnaround Time: " << totalTAT / n << "\n";
}
