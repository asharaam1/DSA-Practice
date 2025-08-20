#include <stdio.h>
#define MAX_SIZE 5  //5 ki gagha 100 bhi da sakhte han
int stack[MAX_SIZE];
int top = -1;

void push(int item) {
    if (top == MAX_SIZE - 1) {
        printf("Overflow & Exit \n");
    } else {
        stack[++top] = item;
        printf("%d Item Inserted.\n", item);
    }
}

void pop() {
    if (top == -1) {
        printf("Underflow & Exit\n");
    } else {
        int item = stack[top--];
        printf("%d Item Deleted. \n", item);
    }
}

void display() {
    if (top == -1) {
        printf("The stack is empty.\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, item;
    printf(" 1.Push\n 2.Pop\n 3.Display\n 4.Exit\n");
    while (1) {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &item);
                push(item);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice!! \n");
        }
    }
    return 0;
}

