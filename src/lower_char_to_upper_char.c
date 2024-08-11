#include<stdio.h>

int main(){
	
	int ascicode;
	
	printf("Enter an asci code: ");
	scanf("%d", &ascicode);

	printf("The corresponding character is %c\n", (char) ascicode);

	return 0;
}
