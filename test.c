#include <stdint.h>
#include <stdio.h>

a[] = { 3, 5, 10, 2, 9, 1 };

int get_min(int a[], int sz) {
    int min = a[0];
    int i;
    for (i=1; i<sz ; i++) {
        if (min < a[i]) min = a[i];
    }
    
    return min;
}