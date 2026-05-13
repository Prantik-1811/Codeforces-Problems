#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> line(n);
    for(int i=0;i<n;i++){
        cin >> line[i];
    }
    int min = 0;
    int max = min;
    for(int i=0;i<n;i++){
        if(line[i]<=line[min]){
            min = i;
        }
        else if(line[i]>line[max]){
            max = i;
        }
    }
    cout << max + (line.size()-1-min); 
}