#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int x; 

int cmp(const void *a, const void *b) {
    int ai = *(int*) a;
    int bi = *(int*) b;
    
    int abs_diff_a = abs(x - ai);
    int abs_diff_b = abs(x - bi);
    
    if (abs_diff_a != abs_diff_b) {
        return abs_diff_a - abs_diff_b;
    } else {
        // Tr? v? 0 ð? gi? nguyên th? t? xu?t hi?n ban ð?u
        return 0;
    }
} 

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d%d", &n, &x);
        int a[n]; 
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        } 
        qsort(a, n, sizeof(int), cmp);
        for (int i = 0; i < n; i++) {
            printf("%d ", a[i]);
        } 
        printf("\n");
    }
    return 0;
} 

