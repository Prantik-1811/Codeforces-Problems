#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,rem, smol; 
    cin >> t;

    for(int i=0;i<t;i++){
        int n;
        cin >> n;
         while(n>0){
            rem = n%10;
            n/=10;
            if(n<rem){
                smol = rem;
            }
            else{
                smol = n;
            }
        }
        

    }

    cout << smol << '\n';
}