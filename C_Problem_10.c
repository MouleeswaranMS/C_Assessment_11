#include <stdio.h>

void strcon(char *src1, char *src2, char *dst);
int main(){
	char a[] = "Moulee";
	char b[] = "Embedded";
	char c[20];
	strcon(a, b, c);
	printf("%s", c);
	return 0;
}

 void strcon(char *src1, char *src2, char *dst){
	 int count1=0;
	 int count2=0;
	 for(int i=0; *(src1+i)!='\0'; i++){
		 *(dst+i) = *(src1+i);
		 count1++;
	 }
	 for(int i=0; *(src2+i)!='\0'; i++){
		 *(dst+count1+i) = *(src2+i);
		 count2++;
	 }
	 *(dst+count1+count2) = '\0';

 }

