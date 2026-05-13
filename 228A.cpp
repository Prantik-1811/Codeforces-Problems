#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int s[4];
    for(int i=0;i<4;i++){
        cin >> s[i];
    }
    set<int> set1;
    for(int i=0;i<4;i++){
        set1.insert(s[i]);
    }

    cout << (sizeof(s)/sizeof(s[0]))-set1.size();
    return 0;

}