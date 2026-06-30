#include <stdio.h>
#include <string.h>
int main()
{
    char word[50];
    int i;
    printf("Enter a word: \n");
    scanf("%s",word);
    printf("You entered: %s\n",word);
    printf("Length= %d\n",strlen(word));

    for (i=0;i<strlen(word);i++)
    {
        printf("%c\n",word[i]);
    }

    printf("ASCII Values:\n ");

    for (i=0; i<strlen(word);i++)
    {
        printf("%c = %d\n",word[i],word[i]);
    }

    printf("First Character : %c\n",word[0]);
    printf("Last Character : %c\n",word[strlen(word)-1]);

    
}