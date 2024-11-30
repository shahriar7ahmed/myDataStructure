#include <bits/stdc++.h>
using namespace std;

#define INF 1e9 // A large value representing infinity

void floydWarshall(vector<vector<int>> &dist, int n) {
    for (int k = 0; k < n; k++) { // Intermediate nodes
        for (int i = 0; i < n; i++) { // Source nodes
            for (int j = 0; j < n; j++) { // Destination nodes
                if (dist[i][k] < INF && dist[k][j] < INF) {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m; // Number of nodes and edges
    vector<vector<int>> dist(n, vector<int>(n, INF)); // Initialize adjacency matrix

    // Input edges
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w; // Edge from u to v with weight w
        dist[u][v] = w;
    }

    // Initialize self-loops to 0
    for (int i = 0; i < n; i++) {
        dist[i][i] = 0;
    }

    floydWarshall(dist, n);

    // Output shortest path distances
    cout << "Shortest distances between every pair of nodes:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dist[i][j] == INF) {
                cout << "INF ";
            } else {
                cout << dist[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
