#include<stdio.h>

int getStrLength(char str[]);

int main(){

	char str[] = "Hello World!\n";

	printf("%s", str);

	int len = getStrLength(str);

	printf("The length of the str = %d\n", len);
	return 0;
}

int getStrLength(char str[]){
	int length = 0;
	while(str[length] != '\0'){
		length++;
	}
	return length;
}



