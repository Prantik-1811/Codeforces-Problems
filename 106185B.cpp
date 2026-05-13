#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    while(n != 0){
        string s;
        cin >> s;

        int len = s.length();
        int overlap = 0;

        
        for(int i = 1; i < len; i++){
            if(s.substr(0, len - i) == s.substr(i)){
                overlap = len - i;
                break;
            }
        }

        
        cout << s + s.substr(overlap) << '\n';

        cin >> n;
    }
}