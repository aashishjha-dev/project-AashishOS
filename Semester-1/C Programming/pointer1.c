#include <stdio.h>
int main()
{
    int age=18;
    int *ptr;
    ptr=&age;

    printf("Value of age= %d\n",age);
    printf("Address od age= %p\n",&age);
    printf("Value stored in ptr= %p\n",ptr);

    return 0;
}