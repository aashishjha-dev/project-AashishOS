#include <stdio.h>

int main()
{
    int number[5];
    int i;
    int largest;
    int smallest;

    printf("Enter 5 Numbers: \n");

    for (i=0; i<5; i++)
    {
        scanf("%d",&number[i]);
    }

    largest=number[0];
    smallest=number[0];

    for (i=1;i<5;i++)
    {
        if(largest<number[i])
        {
            largest=number[i];
        }

        if(smallest>number[i])
        {
            smallest=number[i];
        }
    }

    printf("Largest No: %d\n",largest);
    printf("Smallest No: %d\n",smallest);

    return 0;


}