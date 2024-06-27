#include "stdio.h"
void add1(int a, int b);
void add(int a , int b)
{
    a++; 
    b++;
}
int main()
{
    int a = 3, b = 5; 
    add(a, b);
    printf("%d", a + b);
    return 0;
}