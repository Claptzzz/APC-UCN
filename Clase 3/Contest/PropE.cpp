#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/2131/A
// rating: 800

int main() {

    int t;cin>>t;

    while(t--) {
        int n; cin>>n;
        vector<int> a,b;
        for(int i = 0; i<n; i++) {
            int aux;cin>>aux;
            a.push_back(aux);
        }

        for(int i = 0; i<n; i++) {
            int aux;cin>>aux;
            b.push_back(aux);
        }

        int mayores = 1;

        // revisar mayores
        for(int i = 0; i<n; i++) {
            if (a[i] > b[i]) {
                mayores += a[i]-b[i];
            }
        }
        
        cout << mayores << endl;
    }

    return 0;
}