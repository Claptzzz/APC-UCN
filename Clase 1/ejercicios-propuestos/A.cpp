#include <iostream>
#include <vector>

using namespace std;

// https://codeforces.com/problemset/problem/1030/A
// Data Structure: vector<int>
// rating: 800

int main() {
    int n;
    cin >> n;
    vector<int> opinions(n);
    for (int i = 0; i < n; i++) {
        cin >> opinions[i];
    }
    bool is_hard = false;
    for (int i = 0; i < n; i++) {
        if (opinions[i] == 1) {
            is_hard = true;
            break;
        }
    }
    if (is_hard) {
        cout << "HARD" << endl;
    } else {
        cout << "EASY" << endl;
    }
    
    return 0;
}