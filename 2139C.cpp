    #include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        long long k, x;
        cin >> k >> x;

        long long c = 1LL << k;   // Chocola
        long long v = 1LL << k;   // Vanilla
        vector<int> ops;

        while(c != x){
            if(c > x){
                if(c % 2 == 0){
                    v += c/2;
                    c /= 2;
                    ops.push_back(1);
                }else{
                    c += v/2;
                    v /= 2;
                    ops.push_back(2);
                }
            }else{ // c < x
                if(v % 2 == 0){
                    c += v/2;
                    v /= 2;
                    ops.push_back(2);
                }else{
                    v += c/2;
                    c /= 2;
                    ops.push_back(1);
                }
            }
        }

        cout << ops.size() << "\n";
        for(int o: ops) cout << o << " ";
        if(!ops.empty()) cout << "\n";
    }
    return 0;
}
