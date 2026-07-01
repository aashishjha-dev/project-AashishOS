#include <stdio.h>

void updateMark(int *mark)
{
    printf("Enter new mark: ");
    scanf("%d", mark);
}

int main()
{
    int marks[5];
    int *ptr = marks;

    int i;
    int total = 0;
    float avg;

    int highest;
    int lowest;

    int search;
    int found = 0;

    int updateIndex;

    printf("Enter 5 marks:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }

    highest = *ptr;
    lowest = *ptr;

    for(i = 0; i < 5; i++)
    {
        total = total + *(ptr + i);

        if(*(ptr + i) > highest)
        {
            highest = *(ptr + i);
        }

        if(*(ptr + i) < lowest)
        {
            lowest = *(ptr + i);
        }
    }

    avg = total / 5.0;

    printf("\nMarks:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d\n", *(ptr + i));
    }

    printf("\nTotal = %d\n", total);
    printf("Average = %.2f\n", avg);
    printf("Highest = %d\n", highest);
    printf("Lowest = %d\n", lowest);

    printf("\nEnter mark to search: ");
    scanf("%d", &search);

    for(i = 0; i < 5; i++)
    {
        if(*(ptr + i) == search)
        {
            found = 1;
            break;
        }
    }

    if(found)
    {
        printf("Found!\n");
    }
    else
    {
        printf("Not Found!\n");
    }

    printf("\nWhich index do you want to update? (0-4): ");
    scanf("%d", &updateIndex);

    if(updateIndex >= 0 && updateIndex < 5)
    {
        updateMark(&marks[updateIndex]);

        printf("\nUpdated Marks:\n");

        for(i = 0; i < 5; i++)
        {
            printf("%d\n", *(ptr + i));
        }
    }
    else
    {
        printf("Invalid Index!\n");
    }

    return 0;
}