#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* dateToInt(const char date[11]);

int main() {
    char ref_date[11] = "01/01/1970";   //1 January, 1970
    char date[11]; // Fixed size to hold "DD/MM/YYYY\0"

    int* ref_int;
    int* date_int;
    
    printf("Enter date (DD/MM/YYYY): ");
    scanf("%10s", date);

    printf("Reference Date : %s and Entered date : %s\n", ref_date, date);

    ref_int = dateToInt(ref_date);
    date_int = dateToInt(date);

    printf("Reference Date: Day: %d, Month: %d, Year: %d\n", ref_int[0], ref_int[1], ref_int[2]);
    printf("Entered Date: Day: %d, Month: %d, Year: %d\n", date_int[0], date_int[1], date_int[2]);

    free(ref_int);
    free(date_int);



    return 0;
}


int days(int ref_date[3] , int date[3]){
    if(date[3] > ref_date[3]){

    }else{

    }
}



int* dateToInt(const char date[11]) {
    int* output = (int*)malloc(3 * sizeof(int));
    if (output == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    char date_copy[11];
    strcpy(date_copy, date); // Create a copy of the date string to tokenize

    char* token;
    token = strtok(date_copy, "/");
    output[0] = atoi(token);

    token = strtok(NULL, "/");
    output[1] = atoi(token);

    token = strtok(NULL, "/");
    output[2] = atoi(token);

    return output;
}
