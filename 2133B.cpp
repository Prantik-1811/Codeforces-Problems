#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Edge {
    int u, v;
    long long weight;
    bool operator<(const Edge& other) const {
        return weight < other.weight;
    }
};

class UnionFind {
public:
    vector<int> parent, rank;
    
    UnionFind(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }
    
    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }
    
    bool unite(int x, int y) {
        int px = find(x), py = find(y);
        if (px == py) return false;
        
        if (rank[px] < rank[py]) {
            parent[px] = py;
        } else if (rank[px] > rank[py]) {
            parent[py] = px;
        } else {
            parent[py] = px;
            rank[px]++;
        }
        return true;
    }
};

long long solve(int n, vector<long long>& grumpiness) {
    vector<Edge> edges;
    
    // Create all possible edges between villagers
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            edges.push_back({i, j, max(grumpiness[i], grumpiness[j])});
        }
    }
    
    // Sort edges by weight (cost)
    sort(edges.begin(), edges.end());
    
    UnionFind uf(n);
    long long totalCost = 0;
    int edgesUsed = 0;
    
    // Kruskal's algorithm to find MST
    for (const Edge& e : edges) {
        if (uf.unite(e.u, e.v)) {
            totalCost += e.weight;
            edgesUsed++;
            if (edgesUsed == n - 1) break; // MST complete
        }
    }
    
    return totalCost;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<long long> grumpiness(n);
        for (int i = 0; i < n; i++) {
            cin >> grumpiness[i];
        }
        
        cout << solve(n, grumpiness) << "\n";
    }
    
    return 0;
}