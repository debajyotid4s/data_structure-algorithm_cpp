#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}

void activitySelection(vector<pair<int, int>>& activities) {
    sort(activities.begin(), activities.end(), compare);

    cout << "Selected activities:\n";
    cout << "(" << activities[0].first << ", " << activities[0].second << ")\n";
    int lastFinish = activities[0].second;

    for (int i = 1; i < activities.size(); i++) {
        if (activities[i].first >= lastFinish) {
            cout << "(" << activities[i].first << ", " << activities[i].second << ")\n";
            lastFinish = activities[i].second;
        }
    }
}

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> activities(n);
    for (int i = 0; i < n; i++) {
        cin >> activities[i].first >> activities[i].second;
    }

    activitySelection(activities);

    return 0;
}
