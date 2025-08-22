#include <stdio.h>

int Sum(int a[], int n) {
    int i, s = 0;
    printf("Total Arrays Size %d Bytes\n", sizeof(a) * n); // Array: 4*4=16 Bytes + 16Bytes

    printf("%d Bytes\n", sizeof(int));
    printf("%d Bytes\n", sizeof(n));
    printf("%d Bytes\n", sizeof(i));
    printf("%d Bytes\n", sizeof(s));

    for (i = 0; i < n; ++i) {
        s = s + a[i];
    }
    return s;
}

int main() { // Make sure to declare the return type
    int size;
    printf("Enter Arrays Size: ");
    scanf("%d", &size);  // size=1
    int arr[size];  // arr[4]
    int i; // Declare the variable i
    for (i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }
    int value = Sum(arr, size);
    printf("Sum of Array Values:\n %d", value);

    return 0; // Return statement for main function
}

