#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N + 1);

    for (int i = 1; i <= N; ++i) {
        cin >> a[i];
    }

    vector<int> dist(N + 1, -1);
    queue<int> q;

    dist[1] = 0;
    q.push(1);

    while (!q.empty()) {
        int current = q.front();
        q.pop();
        int next = a[current];

        if (dist[next] == -1) {
            dist[next] = dist[current] + 1;
            q.push(next);
        }
    }
    cout << dist[2] << endl;
    return 0;
}