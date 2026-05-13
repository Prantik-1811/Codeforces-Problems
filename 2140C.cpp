#include <bits/stdc++.h>
using namespace std;

long long f_value(const vector<int>& arr, long long cost) {
    long long alternating_sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (i % 2 == 0) {
            alternating_sum += arr[i];
        } else {
            alternating_sum -= arr[i];
        }
    }
    return cost + alternating_sum;
}

map<pair<vector<int>, pair<long long, pair<bool, int>>>, long long> memo;

long long minimax(vector<int> arr, long long cost, bool alice_turn, int depth, int max_depth) {
    if (depth >= max_depth) {
        return f_value(arr, cost);
    }
    
    auto state = make_pair(arr, make_pair(cost, make_pair(alice_turn, depth)));
    if (memo.find(state) != memo.end()) {
        return memo[state];
    }
    
    long long current_value = f_value(arr, cost);
    int n = arr.size();
    
    long long best = current_value; // Option to end the game
    
    if (alice_turn) { // Alice maximizes
        for (int l = 0; l < n; l++) {
            for (int r = l + 1; r < n; r++) {
                vector<int> new_arr = arr;
                swap(new_arr[l], new_arr[r]);
                long long new_cost = cost + (r - l);
                
                long long value = minimax(new_arr, new_cost, false, depth + 1, max_depth);
                best = max(best, value);
            }
        }
    } else { // Bob minimizes
        for (int l = 0; l < n; l++) {
            for (int r = l + 1; r < n; r++) {
                vector<int> new_arr = arr;
                swap(new_arr[l], new_arr[r]);
                long long new_cost = cost + (r - l);
                
                long long value = minimax(new_arr, new_cost, true, depth + 1, max_depth);
                best = min(best, value);
            }
        }
    }
    
    memo[state] = best;
    return best;
}

long long solve_case(vector<int>& arr) {
    memo.clear();
    int n = arr.size();
    
    int max_depth;
    if (n <= 8) {
        max_depth = 12;
    } else if (n <= 15) {
        max_depth = 8;
    } else {
        max_depth = 4;
    }
    
    return minimax(arr, 0, true, 0, max_depth);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        long long result = solve_case(arr);
        cout << result << "\n";
    }
    
    return 0;
}
