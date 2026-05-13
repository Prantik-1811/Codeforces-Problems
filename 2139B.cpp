#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        
        sort(a.rbegin(), a.rend());
        
        long long totalCakes = 0;
        
        
        for (int i = 0; i < min(n, m); i++) {
            totalCakes += a[i] * (m - i);
        }
        
        cout << totalCakes << "\n";
    }
    
    return 0;
}