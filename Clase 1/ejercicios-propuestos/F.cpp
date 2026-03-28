#include <bits/stdc++.h>
using namespace std;


vector<char> cl = {')', '}', ']', '>'};

// https://codeforces.com/contest/612/problem/C
// para la solución se utilizó map, pero no es necesario.
// propuesta para la estructura de datos stack
// Rating: 1400

int main() {

    map<char, char> conv = {{')', '('}, {']', '['}, {'}', '{'}, {'>', '<'}}; 
    string s; cin >> s;
    int n = s.size();

    stack<char> st;

    int res = 0;
    for(int i=0; i<n; i++) {
        bool is_closed = find(cl.begin(), cl.end(), s[i]) != cl.end();
        if(is_closed) {
            if(st.empty()) {    
                cout << "Impossible" << endl;
                return 0;
            }
            char t = st.top(); st.pop();
            if(t != conv[s[i]]) res++;
        } else {
            st.push(s[i]);
        }
    }

    if(!st.empty()) {
        cout << "Impossible" << endl;
        return 0;
    }

    cout << res<< endl;



    return 0;
}