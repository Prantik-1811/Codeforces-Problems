#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    for(int i=0;i<t;i++){
        string word;
        cin >> word;

        if(word.length()<=10){
            cout << word << '\n';
        }

        else if(word.length()>10){
            cout << word[0] << word.length()-2 << word[word.length()-1] << '\n';
        }
    }
}