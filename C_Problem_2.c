#include <stdio.h>

void increment (int *num);
int main(){
	int num[5] = {1,2,3,4,5};
	increment(num);
	for(int i=0; i<5; i++){
		printf("%d\n", num[i]);
	}
}

void increment (int *num){
	for(int i=0; i<5; i++){
		*(num+i) += 1;
	}
}

