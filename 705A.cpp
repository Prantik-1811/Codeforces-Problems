#include <bits/stdc++.h>
using namespace std;

void Hulk(int n){
    int i=1;
    while(i<n){
        if(i%2!=0){
            cout <<  "I hate that "; 
            i++;
        }
        else if (i%2==0){
            cout << "I love that ";
            i++;
        }
    }
    if(i%2==0){
        cout << "I love it";
    }
    else{
        cout << "I hate it";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    Hulk(n);
    return 0;
}