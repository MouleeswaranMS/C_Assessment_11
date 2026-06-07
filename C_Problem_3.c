#include <stdio.h>

void arrange_ascend(int *num);
int main(){
	int num[5]={4,1,3,5,2};
	arrange_ascend(num);
	for(int i=0; i<5; i++){
		printf("%d\n",num[i]);
	}
	return 0;
}

void arrange_ascend(int *num){
	for(int i=0; i<5; i++){
		for(int j=i+1; j<5; j++){
			if(*(num+i)>*(num+j)){
				int temp = *(num+i);
				*(num+i) = *(num+j);
				*(num+j) = temp;
			}
		}
	}
}

