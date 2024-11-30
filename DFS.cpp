#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void dfs(int node, vector<vector<int>> &adj, vector<bool> &visited) {
    visited[node] = true;
    cout << node << " ";
    for (int child : adj[node]) {
        if (!visited[child]) {
            dfs(child, adj, visited);
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> adj(n + 1); // Adjacency list (1-based indexing)
    vector<bool> visited(n + 1, false); // Visited array initialized to false
    
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    
    int start_node = 1; // Change if you want to start from a different node
    cout << "DFS Traversal: ";
    dfs(start_node, adj, visited);
    cout << endl;

    return 0;
}
