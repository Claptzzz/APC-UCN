#include <bits/stdc++.h>
using namespace std; 

// https://codeforces.com/problemset/problem/1985/C
// rating: 1000

int main() {

    int t;
    cin >> t;


    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> a(n);
        for(int i=0; i<n;i++) cin >> a[i];

        long long total = 0;
        long long suma = 0;
        long long prev_el = 0;
        
        for(int i=0; i<n; i++) {
            suma += a[i];
            prev_el = max(a[i], prev_el);
        
            if(suma%2==0 && suma/2 == prev_el) {
                total++;
            }
        }
        cout << total << endl;
    }
    





    return 0;
}