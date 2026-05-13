#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        
        vector<int> all_nodes;
        for (int i = 1; i <= n; i++) {
            all_nodes.push_back(i);
        }
        
        int best_start = 1;
        int max_len = 0;
        
        for (int start = 1; start <= n; start++) {
            cout << "? " << start;
            for (int node : all_nodes) {
                cout << " " << node;
            }
            cout << endl;
            cout.flush();
            
            int len;
            cin >> len;
            
            if (len > max_len) {
                max_len = len;
                best_start = start;
            }
        }
        
        
        vector<int> path;
        path.push_back(best_start);
        
        vector<bool> used(n + 1, false);
        used[best_start] = true;
        
        int queries_used = n;
        
        while (queries_used < 2 * n) {
            vector<int> available;
            for (int i = 1; i <= n; i++) {
                if (!used[i]) {
                    available.push_back(i);
                }
            }
            
            if (available.empty()) break;
            
            int best_next = -1;
            int best_len = 0;
            
            for (int candidate : available) {
                if (queries_used >= 2 * n) break;
                
                vector<int> remaining;
                for (int x : available) {
                    if (x != candidate) {
                        remaining.push_back(x);
                    }
                }
                
                cout << "? " << candidate;
                for (int node : remaining) {
                    cout << " " << node;
                }
                cout << endl;
                cout.flush();
                
                int len;
                cin >> len;
                queries_used++;
                
                if (len > best_len) {
                    best_len = len;
                    best_next = candidate;
                }
            }
            
            if (best_next == -1 || best_len <= 1) break;
            
            path.push_back(best_next);
            used[best_next] = true;
        }
        
            
        cout << "!";
        for (int node : path) {
            cout << " " << node;
        }
        cout << endl;
        cout.flush();
    }
    
    return 0;
}