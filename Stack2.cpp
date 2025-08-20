#include <stdio.h>

void m3() {
    printf("inside m3 function\n");
}

void m2() {
    m3();
    printf("inside m2 function\n");
}

void m1() {
    m2();
    printf("inside m1 function\n");
}

int main() {
    printf("Execution started... from the main function\n");
    m1();
    printf("Execution ended... from the main function\n");
    return 0;
}

