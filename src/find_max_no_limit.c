#include <stdio.h>
#include <limits.h>

/*Output gives:
Maximum values for various integer types in C:
char: 127
short: 32767
int: 214,74,83,647
long: 922337203685,47,75,807
long long: 922337203685,47,75,807
unsigned char: 255
unsigned short: 65535
unsigned int: 4294967295
unsigned long: 1844674407370,95,51,615
unsigned long long: 1844674407370,95,51,615
*/

int main() {
    printf("Maximum values for various integer types in C:\n");
    printf("char: %d\n", CHAR_MAX);
    printf("short: %d\n", SHRT_MAX);
    printf("int: %d\n", INT_MAX);
    printf("long: %ld\n", LONG_MAX);
    printf("long long: %lld\n", LLONG_MAX);
    printf("unsigned char: %u\n", UCHAR_MAX);
    printf("unsigned short: %u\n", USHRT_MAX);
    printf("unsigned int: %u\n", UINT_MAX);
    printf("unsigned long: %lu\n", ULONG_MAX);
    printf("unsigned long long: %llu\n", ULLONG_MAX);

    return 0;
}
