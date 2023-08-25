#include <stdio.h>

int main()
{
    printf("int = %lu bytes\n", sizeof(int));
    printf("float = %lu bytes\n", sizeof(float));
    printf("long long int = %lu bytes\n", sizeof(long long int));
    printf("double = %lu bytes\n", sizeof(double));
    return 0;
}
/*int = 4 bytes
float = 4 bytes
long long int = 8 bytes
double = 8 bytes*/