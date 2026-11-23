#include <stdio.h>

int main()
{
    int a = 10;
    float b = 10.5;
    char c = 'A';
    double d = 25.6789;

    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of char: %zu byte\n", sizeof(char));
    printf("Size of double: %zu bytes\n", sizeof(double));

    printf("\nSize of variable a: %zu bytes\n", sizeof(a));
    printf("Size of variable b: %zu bytes\n", sizeof(b));
    printf("Size of variable c: %zu byte\n", sizeof(c));
    printf("Size of variable d: %zu bytes\n", sizeof(d));

    return 0;
}