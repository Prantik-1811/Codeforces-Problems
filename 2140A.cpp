#include <iostream>
#include <string>
using namespace std;

int minOperationsToSort(const string& s) {
    int n = s.length();
    
    int ones_count = 0;
    for (char c : s) {
        if (c == '1') ones_count++;
    }
    
    if (ones_count == 0 || ones_count == n) {
        return 0;
    }
    
    int misplaced_ones = 0;
    for (int i = 0; i < n - ones_count; i++) {
        if (s[i] == '1') {
            misplaced_ones++;
        }
    }
    
    return (misplaced_ones + 1) / 2;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        
        int result = minOperationsToSort(s);
        cout << result << "\n";
    }
    
    return 0;
}