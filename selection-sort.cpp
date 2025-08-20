#include <stdio.h>

int main() {
    int i, n, m, j, loc, temp;
    printf("Enter Array Size: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter values in array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n - 1; i++) {
        m = a[i];
        loc = i + 1;
        for(j = i + 1; j < n; j++) {
            if(m > a[j]) {
                m = a[j];
                loc = j;
            }
        }
        if(a[loc] < a[i]) {
            temp = a[loc];
            a[loc] = a[i];
            a[i] = temp;
        }
    }
    
    printf("Sorted Result:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}

