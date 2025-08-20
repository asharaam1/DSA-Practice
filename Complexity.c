#include <stdio.h>

int Square(int n){
	return n*n;
}

main(){
	int num;
	printf("Enter a Number");
	scanf("%d", &num);
	int value = Square(num);
	printf("%d", value);
}
