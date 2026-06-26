#include <stdio.h>

void add(int a, int b)
{
    printf("Sum=%d\n",a+b);
}

int main()
{
    add(5,3);
    add(10,20);
    add(100,50);
    add(999, 1);
    add(-5, 8);

    return 0;
}