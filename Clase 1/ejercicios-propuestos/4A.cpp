#include <iostream>

// https://codeforces.com/problemset/problem/4/A
// rating: 800

using namespace std;
int main()
{
    int n;
    cin >> n;
    
    if(n == 2 || n % 2)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";    
    }

    return 0;
}