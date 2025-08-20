#include <stdio.h>
main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int lr = 0, up = 4, mid, item, f = 0;
    printf("Enter Searching Item :");
    scanf("%d", &item);
    while (lr <= up)
    {
        mid = (lr + up) / 2;
        if (a[mid] == item) {
            f = 1; 
            break;
        }
        if (a[mid] < item) {
            lr = mid + 1;
        }
        else {
            up = mid - 1;
        }
    }
    
    if(f == 1) {
    printf("Item Found at %d", mid);
	}	
	else {
    printf("Item not Found");
	}
}



//Binary Search
//--------------
//Time Complexity :-
//  .Best Case - O(1)
//  .Average Case - O(log n)
//  .Worst Case - O(log n)

