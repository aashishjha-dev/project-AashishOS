#include <stdio.h>

int main()
{
    int marks[5]={85,90,72,68,95};

    marks[2]=100;

    printf("%d\n",marks[0]);
    printf("%d\n",marks[1]);
    printf("%d\n",marks[2]);
    printf("%d\n",marks[3]);
    printf("%d\n",marks[4]);

    return 0;
}