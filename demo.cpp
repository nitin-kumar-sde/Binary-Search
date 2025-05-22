#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <cmath>
#include <fstream>
#include "mystl/lower_bound.hpp"
#include "mystl/upper_bound.hpp"

#define ll long long
#define ld long double
#define endl '\n'
#define N 1000005
#define MOD 1000000007
using namespace mystl;
using namespace std;

bool comp(const int & a, const int & b) {
    return (a > b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    #ifndef ONLINE_JUDGE
        freopen("/Users/nitinkumar/Desktop/Binary-Search/input.txt", "r", stdin);
        freopen("/Users/nitinkumar/Desktop/Binary-Search/output.txt", "w", stdout);
    #endif

    vector<int> v = {2, 4, 5, 6, 8, 9};

    auto it = mystl::lower_bound(v.begin(), v.end(), 8);

    int index = it - v.begin();

    cout << index << endl;

    it = mystl::upper_bound(v.begin(), v.end(), 8);

    index = it - v.begin();

    cout << index << endl;

    v = {9 , 8 , 6 , 5 , 4 , 2};

    it = mystl::lower_bound(v.begin(), v.end(), 8, comp);

    index = it - v.begin();

    cout << index << endl;

    it = mystl::upper_bound(v.begin(), v.end(), 8, comp);

    index = it - v.begin();

    cout << index << endl;

    return 0;
}