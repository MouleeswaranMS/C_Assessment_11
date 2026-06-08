#include <stdio.h>

void intcon(int *src1, int size1, int *src2, int size2, int *dst);
int main(){
	int a[] = {1,2,3};
	int b[] = {4,5,6,7};
	int sizea=3;
	int sizeb=4;
	int c[7];
	intcon(a, sizea, b, sizeb, c);
	for(int i=0; i<7; i++){
		printf("%d\t", c[i]);
	}
	return 0;
}

void intcon(int *src1, int size1, int *src2, int size2, int *dst){
	for(int i=0; i<size1; i++){
		*(dst+i) = *(src1+i);
	}
	for(int i=0; i<size2; i++){
		*(dst+size1+i) = *(src2+i);
	}
}

