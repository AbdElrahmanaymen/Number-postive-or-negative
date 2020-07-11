#include <stdio.h>
#include <stdlib.h>
int x;
int main()
{
    printf("please enter a number");
    scanf("%d", &x);
    if( x<0)
    {
        printf("the number is negative");
    }
    else if (x>0)
    {
        printf("the number is postive");
    }
    else
    {
    printf("the number is 0");
    }
}
