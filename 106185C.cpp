#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin >> n >> m;

    while(n!=0 && m!=0){
        int count=0;
        int nw[m];
        for(int i=0;i<n;i++){
            cin>>nw[i];
        }

        
        cout << count << '\n';
        cin >> n >> m;
    }
    
}