#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/2131/A
// rating: 800

void rellenar(vector<int>& x) {
    for (int i = 0; i<x.size(); i++) {
        cin >> x[i];
    }
}
 
bool levelUp(vector<int>& a, vector<int>& b) {
 
    bool primero = false;
    bool segundo = false;
 
    for (int i=0; i<a.size(); i++) {
        if (a[i] > b[i] && !primero) {
            a[i]--;
            primero = true;
        }
        if (a[i] < b[i] && !segundo) {
            a[i]++;
            segundo = true;
        }
    }
 
    return primero;
}
 
int main() {
 
    int t;cin>>t;
 
    while (t--) {
 
        int n;cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        rellenar(a);
        rellenar(b);
        bool first = true;
        int aux = 0;
 
        while (first) {
            aux++;
            first = levelUp(a,b);
        }
 
        cout << aux << endl;
    }
 
    return 0;
}