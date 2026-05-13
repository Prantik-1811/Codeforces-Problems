#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int t, n = 0;

    cin >> t;

    while (t>0){
        if(t>=100){
            t-=100;
            n++;
        }
        else if(t>=20){
            t-=20;
            n++;
        }
        else if(t>=10){
            t-=10;
            n++;
        }
        else if(t>=5){
            t-=5;
            n++;
        }
        else if(t>=1){
            t-=1;
            n++;
        }

        
    }

    cout << n << '\n';
}