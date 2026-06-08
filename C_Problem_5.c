#include <stdio.h>

void memcopy(int *src, int *dst, int size);
int main(){
	int a[] = {1,2,3};
	int b[] = {4,5,6};
	int size = sizeof(a)/sizeof(a[0]);
	memcopy(a, b, size);
	for(int i=0; i<size; i++){
		printf("%d\n", b[i]);
	}
	return 0;
}

void memcopy(int *src, int *dst, int size){
	for(int i=0; i<size; i++){
		*(dst + i) = *(src + i);
	}
}
