#include<bits/stdc++.h>
#define int int64_t
#define inf 1e12
using namespace std;
vector<int> point(1e5+1);
void print(int i) {
    if(i != 1) print(point[i]);
    cout << i << ' ';
}
int32_t main() {
    int n, m; cin>> n>> m;
    vector<vector<pair<int,int>>> graph(n+1, vector<pair<int,int>> ());
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    while(m--) {
            int u, v, d; cin>> u>> v>> d;
            graph[u].push_back({v, d});
            graph[v].push_back({u, d});
    }
    vector<int> dist(n+1, inf);
    vector<bool> visited(n+1, false);
    dist[1] = 0;
    pq.push({0, 1});
    vector<int> ans;
    while(!pq.empty()) {
        int d = pq.top().first; 
        int node = pq.top().second;
        pq.pop();
        if(!visited[node])
            ans.push_back(node);
            for(auto &it: graph[node]) {
                int cost = it.second;
                if(d + cost < dist[it.first]) {
                    pq.push({d+cost, it.first});
                    dist[it.first] = d+cost;
                    point[it.first] = node;
                }
            }
        visited[node] = true;
    }
    if(dist[n] == inf) cout << -1 << endl;
    else print(n); cout << endl;
    return 0;
}
