// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem?isFullScreen=true
// Problem     Basic Data Types
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-09-11, 11:49 p.m.
// ──────────────────────────────────────────────────

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int d;
    long ld;
    char c;
    float f;
    double lf;
    scanf("%d %ld %c %f %lf",&d,&ld,&c,&f,&lf);
    printf("%d\n%ld\n%c\n%f\n%lf\n",d,ld,c,f,lf);
    return 0;
}
