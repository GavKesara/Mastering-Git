#include <stdio.h>

int main(void)
{
    int repeat;
    printf("How Strong is your love 1-10:\n");
    scanf("%d",&repeat);
    printf("I Dont love you\n very");
    while(repeat>0)
    {
        printf("\n very");
        repeat--;
    };
    printf(" much.\n\n");
    return 0;
}