// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem?isFullScreen=true
// Problem     For Loop
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-09-12, 12:26 a.m.
// ──────────────────────────────────────────────────

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    cin >> a >> b;
    string numbers[]={"","one","two","three","four","five","six","seven","eight","nine"};
    
    for (int i=a;i <= b;i++){
        if(i>=1 && i<=9) cout<<numbers[i] <<endl;
        else if(i%2==0) cout<<"even"<<endl;
        else cout<<"odd"<<endl;
    };
    
    return 0;
}
