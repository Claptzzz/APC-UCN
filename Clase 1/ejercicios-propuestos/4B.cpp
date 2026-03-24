
#include <bits/stdc++.h>

using namespace std;


// https://codeforces.com/problemset/problem/4/B
// Data Structure: vector<pair<int,int>>
// rating: 1200


vector<int> solver(vector<pair<int, int>>& limits, int sum) {

    vector<int> res;

    for(pair<int, int> l_day : limits) {
        res.push_back(l_day.first);
        sum -= l_day.first;
    }

    int i = 0;
    for(pair<int, int> l_day : limits) {
        int dif = abs(l_day.second - l_day.first);

        if(sum == 0) {
            break;
        }
        else if(sum < dif) {
            res[i] += sum;
            sum = 0;
        } else {
            res[i] += dif;
            sum -= dif;
        }
        i++;
    }
    
    if(sum != 0) {
        return vector<int>();
    } 
    return res;
}


int main()
{
    int d, sum;

    cin >> d >> sum;
    int min_sum = 0;

    vector<pair<int, int>> limits;

    while(d--) {
        int min, max;
        cin >> min >> max;
        limits.push_back(make_pair(min, max));
        min_sum += min;
    } 

    if (min_sum > sum) {
        cout << "NO" << endl;
        return 0;
    }

    vector<int> res = solver(limits, sum);

    if(res.size() == 0) {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;
    for(int r : res) {
        cout << r << " ";
    }

    return 0;
}