#include<stdio.h>

int main(void)
{
    printf("Welcome to Cprogramming\n");
    
    int x,y,z;
    x = 10;
    y = 2 * x;
    z = x + y;
    printf("x = %d\ny = %d\nz = %d\n",x,y,z);

    int price;
    price = 500;
    price = 1.1 * (float)price;
    printf("%d\n",price);
    return 0;
}