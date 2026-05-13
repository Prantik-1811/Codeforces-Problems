#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, count =0;

    cin >> n;

    while(n!=0){
        int rem = abs(n%10);
        if(rem == 4 || rem ==7){
            count ++;
        }
        n/=10;
    }

    if(count == 4 || count == 7){
        cout << "YES" << '\n';
    }
    else{
        cout << "NO" << '\n';
    }
}