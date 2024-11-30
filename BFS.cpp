#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define vvll vector<vector<ll>>

void bfs(vvll &adj, vector<ll> &dist, ll s) {
    queue<ll> q;
    q.push(s);
    dist[s] = 0; // Starting node has distance 0
    while (!q.empty()) {
        ll u = q.front();
        q.pop();
        for (auto v : adj[u]) {
            if (dist[v] == -1) { // Unvisited node
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
}

int main() {
    ll n, m;
    cin >> n >> m;
    vvll adj(n); // Adjacency list for the graph
    for (ll i = 0; i < m; i++) {
        ll u, v;
        cin >> u >> v;
        u--; v--; // Convert to 0-based indexing
        adj[u].pb(v);
        adj[v].pb(u);
    }

    vector<ll> dist(n, -1); // Distance array initialized to -1
    bfs(adj, dist, 0);      // Start BFS from node 0

    // Output the distances
    for (ll i = 0; i < n; i++) {
        cout << dist[i] << " ";
    }
    cout << endl;

    return 0;
}
