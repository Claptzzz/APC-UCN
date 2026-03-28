#include <bits/stdc++.h>

using namespace std;

// https://codeforces.com/problemset/problem/702/A
// Data estructure: vector<int>
// rating: 800

int main() {

    int n;
    cin >> n;


    vector<int> arr (n);

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int best=1;

    int cont = 1;
    for(int i=0; i<n-1; i++) {
        if(arr[i] < arr[i+1]) {
            cont++;
            best = max(cont, best);
        } else {
            best = max(cont, best);
            cont = 1;
        }
    }

    cout << best << " "; 

    return 0;
}