// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/variable-sized-arrays/problem?isFullScreen=true
// Problem     Variable Sized Arrays
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-09-13, 12:47 p.m.
// ──────────────────────────────────────────────────

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    vector<vector<int>> arr;
    int n,q;
    cin >> n >> q;
    
    for(int i=0;i<n;i++){
        int k;
        cin >> k;
        
        vector<int> temp(k);
        
        for(int j=0;j<k;j++){
            cin >> temp[j]; 
        }
        arr.push_back(temp);
    } 
    
    for (int x=0;x<q;x++){
        int i,j;
        cin >> i >> j;
        
        cout << arr[i][j] <<endl;   
    }
    return 0;
}
