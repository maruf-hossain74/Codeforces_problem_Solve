#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> graph;
vector<int> white, black;
string s;
void dfs(int child, int parent) {
    if(s[child] == 'W') white[child]++;
    else black[child]++;
    for(auto &it: graph[child]) {
        if(it != parent) {
            dfs(it, child);
        }
    }
    white[parent] += white[child];
    black[parent] += black[child];
}
int main() {
    int t = 1;
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>> t;
    while(t--) {
        graph.clear();
        int n,x; cin >> n;
        graph.resize(n+2, vector<int> ());
        for(int i = 2; i <= n; i++) {
            cin>> x;
            graph[i].push_back(x);
            graph[x].push_back(i);
        }
        cin>> s; s = " " + s;
        white.assign(n+2, 0); // resize is not working!!!!
        black.assign(n+2, 0); // resize is not working!!!!
        dfs(1,0);
        int ans = 0;
        for(int i = 1; i <= n; i++) {
            if(white[i] == black[i]) {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
