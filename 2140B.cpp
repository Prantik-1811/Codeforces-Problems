#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
        int k = to_string(x).size();   // number of digits in x
        long long y = pow(10, k) - 1; // works for all cases
        cout << y << "\n";
    }
    return 0;
}
