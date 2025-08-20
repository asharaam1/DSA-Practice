#include <stdio.h>

int Sum(int a[], int n) {
    int i, s = 0;
    for(i = 0; i < n; ++i){
        s = s + a[i];
    }
    return s; 
} 

int main() {
    int size;
    printf("Enter Arrays Size: ");
    scanf("%d", &size);
    int arr[size];
    int i;  // Declare the variable i here
    for(i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }
    
    int value = Sum(arr, size);
    printf("Sum of Array Values: %d", value);

    return 0;  // Adding return statement for main function
}

