#include <bits/stdc++.h>
using namespace std;

void cake(int t){
    int k, x;
    cin >> k >> x;
    long int C = pow(2,k);
    long int V = C;
    int s = 0;
    while (C!=x){
        if(C%2==0){
            V = V +(C/2);
            C/=2;
        }
    }
}