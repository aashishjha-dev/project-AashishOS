#include <stdio.h>

int main()
{
    int marks[5];

    printf("Enter 5 marks: \n");

    scanf("%d", &marks[0]);
    scanf("%d", &marks[1]);
    scanf("%d", &marks[2]);
    scanf("%d", &marks[3]);
    scanf("%d", &marks[4]);

    printf("\nYou Entered:\n");

    printf("%d\n", marks[0]);
    printf("%d\n", marks[1]);
    printf("%d\n", marks[2]);
    printf("%d\n", marks[3]);
    printf("%d\n", marks[4]);

    return 0;
    
}