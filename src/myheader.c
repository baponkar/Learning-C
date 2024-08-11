#include<string.h>	//for strlen() function
#include<ctype.h>	//for toupper() and tolower() function
#include<stdbool.h> //for bool variable
#include "myheader.h"




void lower(char str[]){
	for (int i=0 ; str[i]!= '\0'; i++){
		str[i] = tolower(str[i]);
	}
}

void upper(char str[]){
	for (int i=0 ; str[i]!= '\0'; i++){
		str[i] = toupper(str[i]);
	}
}

void capitalize(char str[]){
	bool nextCapital = false;
	for(int i=0; str[i] != '\0'; i++){
		if(str[0] != ' '){
			str[0] = toupper(str[0]);
		}
		if(str[i] == ' '){
			nextCapital = true;
		}else if(nextCapital){
			str[i] = toupper(str[i]);
			nextCapital = false;
		}else{
			str[i] = tolower(str[i]);
		}
	}
}

void trim(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;

    // Trim leading whitespace
    while (isspace((unsigned char)str[start])) {
        start++;
    }

    // Trim trailing whitespace
    while (end >= start && isspace((unsigned char)str[end])) {
        end--;
    }

    // Shift the trimmed string to the beginning of the array
    int length = end - start + 1;
    for (int i = 0; i < length; i++) {
        str[i] = str[start + i];
    }
    str[length] = '\0'; // Null-terminate the trimmed string
}



