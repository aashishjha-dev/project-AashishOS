#include <stdio.h>
int main()
{
    int marks[5]={10,20,30,40,50};
    int *ptr=marks;

    printf("marks= %p\n",marks);
    printf("&marks[0]=%p\n",&marks[0]);
    printf("ptr=%p\n",ptr);

    printf("\n");

    printf("First element= %d\n",marks[0]);
    printf("Using pointer=%d\n",*ptr);

    return 0;
}