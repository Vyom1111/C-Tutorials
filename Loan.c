#include<stdio.h>
int main()
{
    int a, rev=0;
    printf("Enter a number");
    scanf("%d", &a);
    
    while (a>0)
    {
        rev = (rev*10) + (a%10);
        a = a/10;
        
    }
    printf("Reversed number is: %d", rev);

    return 0;
    }