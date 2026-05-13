#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector <char> word(n);
    
    for(int i=0;i<n;i++){
        cin >> word[i];
    }

    unordered_set<char> final(word.begin(), word.end());

    if(final.size()>= 26){
        cout << "YES" << '\n';
    }
    else{2139A
        cout << "NO" << '\n';
    }
}