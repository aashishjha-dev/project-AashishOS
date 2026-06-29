#include <stdio.h>

int main()
{
    int marks[5];
    int total = 0;
    float average;
    int highest;
    int lowest;
    int found = 0;
    int i;
    int search;

    printf("Enter 5 marks of the students:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }

    highest = marks[0];
    lowest = marks[0];

    printf("\nMarks Entered:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d\n", marks[i]);

        total = total + marks[i];

        if(highest < marks[i])
        {
            highest = marks[i];
        }

        if(lowest > marks[i])
        {
            lowest = marks[i];
        }
    }

    average = total / 5.0;

    printf("\nTotal = %d\n", total);
    printf("Average = %.2f\n", average);
    printf("Highest Mark = %d\n", highest);
    printf("Lowest Mark = %d\n", lowest);

    printf("\nEnter mark to search: ");
    scanf("%d", &search);

    for(i = 0; i < 5; i++)
    {
        if(search == marks[i])
        {
            found = 1;
        }
    }

    if(found == 1)
    {
        printf("Mark Found!\n");
    }
    else
    {
        printf("Mark Not Found!\n");
    }

    return 0;
}