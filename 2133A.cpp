#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> gears(n);
        unordered_set<int> seen;
        bool hasDuplicate = false;
        
        for (int i = 0; i < n; i++) {
            cin >> gears[i];
            if (seen.count(gears[i])) {
                hasDuplicate = true;
            }
            seen.insert(gears[i]);
        }
        
        if (hasDuplicate) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}