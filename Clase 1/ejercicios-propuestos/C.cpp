#include <bits/stdc++.h>
using namespace std;
#define int long long

// https://codeforces.com/contest/2128/problem/A
// rating: 800

signed main() {


    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        int c; cin >> c;
        vector<int> a;

        int res = 0;
        for(int i=0; i<n; i++) {
            int ai; cin >> ai;
            if(ai > c) {
                res++;
            } else {
                a.push_back(ai);
            }
            
        }


        sort(a.begin(), a.end());


        int pot2 = 1;
        for(int i=(a.size()-1); i>=0; i--) {
            if(pot2*a[i] > c) {
                res++;
            } else {
                pot2 *= 2;
            } 
        }

        cout << res << endl;

    }




    return 0;
}