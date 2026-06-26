#include <stdio.h>

int multiply(int a, int b)
{
    return a*b;
}

int main()
{
    int result;
    result=multiply(12,8);
    printf("Product= %d\n",result);

    return 0;
}