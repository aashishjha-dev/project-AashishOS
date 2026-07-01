#include <stdio.h>
int main()
{
    int age=18;
    int *ptr= &age;
    *ptr=25;
    printf("%d\n",age);
    printf("age= %d\n",age);
    printf("&age= %p\n",&age);
    printf("ptr=%p\n",ptr);
    printf("*ptr=%d\n",*ptr);

    return 0;
}