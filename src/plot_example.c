#include <stdio.h>
#include<math.h>

int main() {
    // Data to plot
    FILE *dataFile = fopen("data.dat", "w");
    for (int i = 0; i < 100; i++) {
        fprintf(dataFile, "%d %lf\n", i, sin(i * 3.14 / 50)); // Example: sine function
    }
    fclose(dataFile);

    // Create Gnuplot commands
    FILE *gnuplotPipe = popen("gnuplot -persistent", "w");
    if (gnuplotPipe == NULL) {
        fprintf(stderr, "Could not open pipe to gnuplot\n");
        return 1;
    }

    fprintf(gnuplotPipe, "plot 'data.dat' with linespoints\n");
    fclose(gnuplotPipe);

    return 0;
}
