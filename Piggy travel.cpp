#include <iostream>
#include <vector>
#include <queue>
#include <limits>
#include <cmath>

#define pii pair<int,int>
#define INF INT_MAX

using namespace std;

vector<vector<pii>> createGraph(vector<pair<int, int>>& cities, int k) {
    int n = cities.size();
    vector<vector<pii>> graph(n);

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            int cost = abs(cities[i].first - cities[j].first) + abs(cities[i].second - cities[j].second);
            if(i < k && j < k) // if both cities are major cities
                cost = 0;
            graph[i].push_back({j, cost});
            graph[j].push_back({i, cost});
        }
    }

    return graph;
}

vector<int> CheapestPath(vector<pair<int, int>>& cities, int src, int k) {
    vector<vector<pii>> graph = createGraph(cities, k);
    int n = graph.size();
    vector<int> cost(n, INF);
    priority_queue<pii, vector<pii>, greater<pii>> pq;

    pq.push(make_pair(0, src));
    cost[src] = 0;

    while(!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        for(auto& i : graph[u]) {
            int v = i.first;
            int weight = i.second;

            if(cost[v] > cost[u] + weight) {
                cost[v] = cost[u] + weight;
                pq.push(make_pair(cost[v], v));
            }
        }
    }

    return cost;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, k, a, b;
        cin >> n >> k >> a >> b;
        a--; b--; // 0-based indexing

        vector<pair<int, int>> cities(n);
        for(int i = 0; i < n; i++) {
            cin >> cities[i].first >> cities[i].second;
        }

        vector<int> cost = CheapestPath(cities, a, k);
        cout << cost[b] << endl;
    }

    return 0;
}
