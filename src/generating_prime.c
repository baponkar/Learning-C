#include<stdio.h> //printf function
#include<stdbool.h>
#include<math.h> //for sqrt function
#include <time.h> //for clock() function
#include <stdlib.h>


unsigned long long min, max;

bool primeCheck(unsigned long long no){
    for(unsigned long long i=2; i<= sqrt(no); i++){
        if(no % i == 0){
            return false;
        }
    }
    return true;
}


void storePrime(unsigned long long no){
	//Open the file
	FILE *file;
	char *filename = "../build/prime_nos.csv";
	file = fopen(filename, "a");

	//Creating the file if not exist
	if (file == NULL) {
        	fprintf(stderr, "Could not create file %s\n", filename);
    	}
	//Append the number into the file
	if (file == NULL) {
        	fprintf(stderr, "Could not open file %s for appending\n", filename);
    	}

	fprintf(file, "%llu\n",no);
	//Close the file
	fclose(file);

}


void main(){
    printf("Please Enter minimum and maximum range:");
    scanf("%llu %llu", &min, &max);
    clock_t start_time = clock();

    for(unsigned long long i=min; i<max; i++){
        if(primeCheck(i)){
			storePrime(i);
            printf("%llu \n", i);
        }
    }

     clock_t end_time = clock();

    // Calculate the elapsed time in seconds
    double time_taken = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
    printf("Time taken to complete the operation: %f seconds\n", time_taken);
}


