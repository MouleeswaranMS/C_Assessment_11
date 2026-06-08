#include <stdio.h>
#include <stdbool.h>

void strcopy(char *src, char *dst);

int main(){
	char str_1[] = "Moulee";
	char str_2[] = "Moulee";
	strcopy(str_1, str_2);
	return 0;
}

void strcopy(char *src, char *dst){
	int i=0;
	bool is_equal=true;
	while (*(src+i)!='\0'){
		if(*(dst + i) != *(src + i)){
			is_equal=false;
		}
		i++;
	}
	is_equal ? printf("Success") : printf("Failure");
}

