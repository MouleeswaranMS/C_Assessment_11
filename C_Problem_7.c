#include <stdio.h>
#include <stdbool.h>

void memcomp(int *src, int *dst, int size);

int main(){
	int a[] = {1,2,3};
	int b[] = {1,2,3};
	int size = sizeof(a)/sizeof(a[0]);
	memcomp(a, b, size);
	return 0;
}

void memcomp(int *src, int *dst, int size){
	bool is_equal = true;
	for(int i=0; i<size; i++){
		if(*(dst + i) != *(src + i)){
			is_equal = false;
		}
	}
	is_equal ? printf("Success") : printf("Failure");
}
