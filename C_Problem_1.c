#include <stdio.h>

int main(){
	int a;
	printf("Enter a number:");
	scanf("%d", &a);
	printf("\nThe value before any change: %d", a);
	int *p = &a;
	*p = 14;
	printf("\nThe value has been changed to 14: %d", a);
}

