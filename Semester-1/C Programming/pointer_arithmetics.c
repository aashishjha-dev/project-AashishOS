#include <stdio.h>
int main()
{
    int marks[5]={10,20,30,40,50};
    int *ptr=marks;
    printf("First= %d\n",*ptr);
    ptr++;
    printf("Second= %d\n",*ptr);
    ptr++;
    printf("Third= %d\n",*ptr);


    //shortcut to move in array 
    printf("Fifth= %d\n",*(ptr+2));
    return 0;
}