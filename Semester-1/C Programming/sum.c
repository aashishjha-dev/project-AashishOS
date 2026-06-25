#include <stdio.h>
int main()
{
    int count=1;
    int sum=0;

    while(count<=10)
    {
        sum=sum+count;
        count=count+1;
    }

    printf("Sum= %d\n",sum);

    return 0;
        
    
}