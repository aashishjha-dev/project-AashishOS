#include <stdio.h>

int main()
{
    int numbers[5];
    int i;
    int sum=0;

    printf("Enter 5 Numbers:\n");

    for(i=0; i<5; i++)
    {
        scanf("%d",&numbers[i]);
    }

    for (i=0; i<5; i++)
    {
        sum=sum+numbers[i];
    }

    printf("Sum= %d\n",sum);

    return 0;
}