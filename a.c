#include "stdio.h"
<<<<<<< HEAD
void add1(int a, int b);
=======
void address(int , int );
//nice to meet you 
>>>>>>> 769ff281a29d2b5968006c069e10daea67046a72
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