#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, steps = 0;
    cin >> t;

    while (t>0){
        if((t-5)>=0){
            t-=5;
            steps++;
        }
        else if((t-4)>=0){
            t-=4;
            steps++;
        }
        else if((t-3)>=0){
            t-=3;
            steps++;
        }
        else if((t-2)>=0){
            t-=2;
            steps++;
        }
        else if((t-1)>=0){
            t-=1;
            steps++;
        }
    }

    cout << steps << '\n';
}