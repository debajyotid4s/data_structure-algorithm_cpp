#include <iostream>
#include <vector>
#include <queue>
#include <iomanip>
using namespace std;

int main() {
    int n, quantum;
    cout << "Enter number of processes: ";
    cin >> n;

    vector<int> pid(n), arrival(n), burst(n), remaining(n), waiting(n, 0), turnaround(n, 0), completed(n, 0);
    cout << "Enter Arrival Time and Burst Time for each process:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Process " << i + 1 << ":\n";
        cout << "Arrival Time: ";
        cin >> arrival[i];
        cout << "Burst Time: ";
        cin >> burst[i];
        remaining[i] = burst[i];
        pid[i] = i + 1;
    }

    cout << "Enter Time Quantum: ";
    cin >> quantum;

    vector<pair<int, int>> gantt; // {process id, start time}
    queue<int> q;
    int time = 0, total_completed = 0;

    // To track which processes have been added to the queue
    vector<bool> inQueue(n, false);

    while (total_completed < n) {
        // Add new arriving processes to the queue
        for (int i = 0; i < n; ++i) {
            if (arrival[i] <= time && !inQueue[i] && remaining[i] > 0) {
                q.push(i);
                inQueue[i] = true;
            }
        }

        if (q.empty()) {
            time++; // Idle time
            continue;
        }

        int idx = q.front();
        q.pop();
        gantt.push_back({pid[idx], time});

        int execTime = min(quantum, remaining[idx]);
        time += execTime;
        remaining[idx] -= execTime;

        // Check for newly arrived processes during this time
        for (int i = 0; i < n; ++i) {
            if (arrival[i] > gantt.back().second && arrival[i] <= time && !inQueue[i] && remaining[i] > 0) {
                q.push(i);
                inQueue[i] = true;
            }
        }

        if (remaining[idx] > 0) {
            q.push(idx); // Not finished, requeue
        } else {
            turnaround[idx] = time - arrival[idx];
            waiting[idx] = turnaround[idx] - burst[idx];
            completed[idx] = 1;
            total_completed++;
        }
    }

    // Print Gantt Chart
    cout << "\nGantt Chart:\n ";
    for (auto &entry : gantt)
        cout << "P" << entry.first << " ";
    cout << "\n" << gantt[0].second;
    int currentTime = gantt[0].second;
    for (auto &entry : gantt) {
        int execTime = min(quantum, burst[entry.first - 1] - remaining[entry.first - 1]);
        currentTime += execTime;
        cout << setw(3) << currentTime;
    }

    // Results
    float totalWT = 0, totalTAT = 0;
    cout << "\n\nProcess\tArrival\tBurst\tWaiting\tTurnaround\n";
    for (int i = 0; i < n; ++i) {
        cout << "P" << pid[i] << "\t" << arrival[i] << "\t" << burst[i] << "\t"
             << waiting[i] << "\t" << turnaround[i] << "\n";
        totalWT += waiting[i];
        totalTAT += turnaround[i];
    }

    cout << fixed << setprecision(2);
    cout << "Average Waiting Time: " << totalWT / n << "\n";
    cout << "Average Turnaround Time: " << totalTAT / n << "\n";

    return 0;
}
