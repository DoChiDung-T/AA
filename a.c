#include "stdio.h"
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