#include <stdio.h>
void change(int *x)
{
    *x=100;
}

int main()
{
    int number=50;
    printf("Before=%d\n",number);
    change(&number);
    printf("After=%d\n",number);

    return 0;
}