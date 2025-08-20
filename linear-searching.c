#include <stdio.h>
#include <stdlib.h>

int main(){
    int item, i = 0;
    int a[5] = {34, 56, 32, 78, 12};
    printf("Enter Searching Item: ");
    scanf("%d", &item);
    while (i < 5) {
        if (a[i] == item) {
            printf("Item Found at %d", i);
            exit(0);
        }
        ++i;
    }
    if (i >= 5) {
        printf("Item Not Found");
        exit(0);
    }
    return 0;
}


//Linear Search
//--------------
//Time Complexity :-
//.Best Case - O(1)   //O ==> omega
//.Average Case - O(n)  
//.Worst Case - O(n)

