#include <stdio.h>

int main()
{
    int marks[5];
    int i;

    printf("Enter 5 marks:\n");

    for(i=0; i<5; i++)
    {
        scanf("%d",&marks[i]);
    }

    printf("\nYou Entered:\n");

    for(i=0; i<5; i++)
    {
        printf("%d\n",marks[i]);

    }

    return 0;
}