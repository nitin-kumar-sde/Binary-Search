#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <cmath>
#include <fstream>
using namespace std;

#define ll long long
#define ld long double
#define endl '\n'
#define N 1000005
#define MOD 1000000007

// searches element in sorted array
int binary_search(ll input[] , int n, ll target) {
  
    int low = 0;
    int high = n-1;
    
    while(low<=high) {
        int mid = low + (high - low) / 2;
        // got the element 
        if(input[mid] == target) 
        return mid;

        else if(input[mid] > target)
        high = mid-1;

        else
        low = mid+1;
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    #ifndef ONLINE_JUDGE
        freopen("/Users/nitinkumar/Desktop/Binary-Search/input.txt", "r", stdin);
        freopen("/Users/nitinkumar/Desktop/Binary-Search/output.txt", "w", stdout);
    #endif

    ll input[] = {10, 12, 20, 30, 34, 54};  
    
    int index = binary_search(input, 6, 12);

    cout << index << endl;
    return 0;
}