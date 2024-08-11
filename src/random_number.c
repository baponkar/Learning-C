#include <stdio.h>
#include <stdlib.h>
#include <time.h>  // For time(NULL) to seed the random number generator

int main() {
    int i;

    // Seed the random number generator
    srand(time(NULL));

    // Generate and print 10 random numbers
    printf("Generating 10 random numbers:\n");
    for (i = 0; i < 10; i++) {
        int random_number = rand();
        printf("%d\n", random_number);
    }

    return 0;
}
