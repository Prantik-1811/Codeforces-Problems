#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    do{
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                sum+=(i+1)*(j+1);
            }
        }

        cout << sum << '\n';

        cin >> n;
    }while(n!=0);

    return 0;
}