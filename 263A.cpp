#include <bits/stdc++.h>
using namespace std;

int main(){
    // first find where 1 exists
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int l, m;

    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin >> arr[i][j];
        }
    }
    // find 1 and return absolute diff
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr[i][j] == 1){
                l = i;
                m = j;
            }
        }
    }

    cout << abs(l-2) + abs(m-2) << '\n';
    
    return 0;

}