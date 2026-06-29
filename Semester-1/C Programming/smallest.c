#include <stdio.h>

int main()
{
    int numbers[5];
    int i;
    int smallest;

    printf("Enter 5 numbers: \n");

    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&numbers[i]);
    }

    smallest=numbers[0];

    for ( i = 0; i < 5; i++)
    {
        if (smallest>numbers[i])
        {
            smallest=numbers[i];
        }
    }
    
    printf("Smallest no= %d\n",smallest);

    return 0;
}
