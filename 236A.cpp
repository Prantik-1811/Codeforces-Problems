#include <bits/stdc++.h>
using namespace std;

int main(){
    string name;
    cin >> name;

    unordered_set<char> name2(name.begin(),name.end());

    if(name2.size()%2==0){
        cout << "CHAT WITH HER!" << '\n';
    }
    else{
        cout << "IGNORE HIM!" << '\n';
    }

    return 0;
}