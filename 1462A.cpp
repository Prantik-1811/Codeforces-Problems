/*A. Favorite Sequence
time limit per test2 seconds
memory limit per test256 megabytes
Polycarp has a favorite sequence a[1…n]
 consisting of n
 integers. He wrote it out on the whiteboard as follows:

he wrote the number a1
 to the left side (at the beginning of the whiteboard);
he wrote the number a2
 to the right side (at the end of the whiteboard);
then as far to the left as possible (but to the right from a1
), he wrote the number a3
;
then as far to the right as possible (but to the left from a2
), he wrote the number a4
;
Polycarp continued to act as well, until he wrote out the entire sequence on the whiteboard.
The beginning of the result looks like this (of course, if n≥4
).
For example, if n=7
 and a=[3,1,4,1,5,9,2]
, then Polycarp will write a sequence on the whiteboard [3,4,5,2,9,1,1]
.

You saw the sequence written on the whiteboard and now you want to restore Polycarp's favorite sequence.

Input
The first line contains a single positive integer t
 (1≤t≤300
) — the number of test cases in the test. Then t
 test cases follow.

The first line of each test case contains an integer n
 (1≤n≤300
) — the length of the sequence written on the whiteboard.

The next line contains n
 integers b1,b2,…,bn
 (1≤bi≤109
) — the sequence written on the whiteboard.

Output
Output t
 answers to the test cases. Each answer — is a sequence a
 that Polycarp wrote out on the whiteboard.*/


#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    // input test cases

    while(t--){
        int n;
        cin >> n;
        vector <int> vec1(n); // declare input vector 
        for(int i=0;i<n;i++){
            cin >> vec1[i]; 
        }

        vector <int> vec2(n,0);
        int start = 0, end = n-1, k=0; // assuming 0 as first case 
        while(start <= end){
            if(k%2==0){
                vec2[k] = vec1[start];
                start++;
                k++;
            }
            else{
                vec2[k] = vec1[end];
                end--;
                k++;
            }
        }

        for(int i=0;i<n;i++){
            cout << vec2[i] << " ";
        }
        cout << '\n';
        
    }
}