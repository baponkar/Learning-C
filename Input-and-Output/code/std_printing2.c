#include<stdio.h>


int main(){
	char string[50] = "This is a string\n";
	
	int i = 0;
	while(string[i] != '\0'){
		putchar(string[i]);
		i++;
	}
	

	return 0;
}
