#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x = 0;
    cin >> n;

    vector <string> ops(n);

    for(int j=0;j<n;j++){
        cin >> ops[j];
    }

    for(int i=0;i<n;i++){
        if(ops[i]== "++X" || ops[i] == "X++"){
            x++;
        }
        else{
            x--;
        }
    }

    cout << x << '\n';

    return 0;
}