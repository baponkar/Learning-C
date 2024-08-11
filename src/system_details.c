#include <stdio.h>
#include <stdlib.h>
#include <sys/utsname.h>
#include<string.h>

void get_os_details() {
    struct utsname unameData;
    if (uname(&unameData) == 0) {
        printf("OS Name: %s\n", unameData.sysname);
        printf("Node Name: %s\n", unameData.nodename);
        printf("OS Release: %s\n", unameData.release);
        printf("OS Version: %s\n", unameData.version);
        printf("Machine: %s\n", unameData.machine);
    } else {
        perror("uname");
    }
}

void get_cpu_details() {
    FILE *cpuinfo = fopen("/proc/cpuinfo", "r");
    if (cpuinfo == NULL) {
        perror("fopen");
        return;
    }

    char buffer[256];
    while (fgets(buffer, sizeof(buffer), cpuinfo)) {
        if (strncmp(buffer, "model name", 10) == 0) {
            printf("%s", buffer);
            break;
        }
    }

    fclose(cpuinfo);
}

void get_memory_details() {
    FILE *meminfo = fopen("/proc/meminfo", "r");
    if (meminfo == NULL) {
        perror("fopen");
        return;
    }

    char buffer[256];
    while (fgets(buffer, sizeof(buffer), meminfo)) {
        if (strncmp(buffer, "MemTotal", 8) == 0) {
            printf("%s", buffer);
            break;
        }
    }

    fclose(meminfo);
}

int main() {
    printf("System Details:\n");
    printf("=================\n");

    get_os_details();
    printf("\n");

    printf("CPU Details:\n");
    printf("=============\n");
    get_cpu_details();
    printf("\n");

    printf("Memory Details:\n");
    printf("=================\n");
    get_memory_details();

    return 0;
}
