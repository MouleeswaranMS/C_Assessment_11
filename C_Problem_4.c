#include <stdio.h>

void find_2digit_odd_sum7(int *num, int *count);
int main(){
	int num[5];
	int count=0;
	find_2digit_odd_sum7(num, &count);
	for(int i=0; i<count; i++){
		printf("%d\n", num[i]);
	}
	return 0;
}

void find_2digit_odd_sum7(int *num, int *count){
	for(int i=10; i<100; i++){
		int temp=i, sum=0;
		while(temp!=0){
			sum = sum + temp%10;
			temp/=10;
		}
		if((i%2!=0)&&(sum==7)){
			*(num + *count)=i;
			(*count)++;
		}
	}
}

