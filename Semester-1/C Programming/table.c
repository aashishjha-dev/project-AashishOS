#include <stdio.h>

int main()
{
    int num;
    int count = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(count <= 10)
    {
        printf("%d x %d = %d\n", num, count, num * count);
        count = count + 1;
    }

    return 0;
}