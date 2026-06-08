#include <stdio.h>

void strcopy(char *src, char *dst);

int main(){
	char str_1[] = "Moulee";
	char str_2[7];
	strcopy(str_1, str_2);
	printf("%s", str_2);
	return 0;
}

void strcopy(char *src, char *dst){
	int i=0;
	while (*(src+i)!='\0'){
		*(dst + i) = *(src + i);
		i++;
	}
	*(dst + i) = '\0';
}

