#include <stdio.h>

int main()
{
    int numbers[5];
    int i;
    int largest;

    printf("Enter 5 numbers:");

    for (i=0; i<5; i++)
    {
        scanf("%d",&numbers[i]);

    }
    largest= numbers[0];

    for(i=0;i<5;i++)
    {
        if (numbers[i]>largest)
        {
            largest=numbers[i];
        }

    }

    printf("Largest=%d\n",largest);

    return 0;
}