#include "stdio.h"
void add1(int a, int b);
void address(int , int );
//nice to meet you 
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
    printf("%d", a);
    return 0;
}