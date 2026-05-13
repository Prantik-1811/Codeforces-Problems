#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int a, b, count = 0;
        cin >> a >> b;
        while(a%b !=0){
            a++;
            count++;
        }

        cout << count << '\n';
    }

}