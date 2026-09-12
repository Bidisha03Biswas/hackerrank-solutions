// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?isFullScreen=true
// Problem     Pointer
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-09-12, 11:36 p.m.
// ──────────────────────────────────────────────────

#include <stdio.h>
#include <algorithm>

void update(int *a,int *b) {
    // Complete this function
    int add = *a + *b;
    int diff = abs(*a - *b);
    *a = add;
    *b = diff;
    /*
    this is wrong as the *a->address of a->value of a is updating at first which is causing problem for diff because its getting the new value.
    *a = *a + *b;
    *b = abs(*a -*b);
    */    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
