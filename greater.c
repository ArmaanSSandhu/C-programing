#include <stdio.h>


int main(){
    
    int a;
    int b;
    int c;
    
    printf("enter number 1 ");
    scanf("%d", &a);
    
    printf("enter number 2 ");
    scanf("%d", &b);
    
    printf("enten umber 3 ");
    scanf("%d", &c);
    
    if(a>b)
    {
        if(a>c)
        {
            printf("a is greatest number");
        }
        
        else
        {
            printf("c is the greatest number");
        }
    }
    else if(b>a)
    {
        if (b>c)
        {
            printf("b is the greatest");
        }
        else
        {
            printf("c is the greatest");
        }
    }
    else if(c>a)
    {
        if (c>b)
        {
            printf("c is the greatest");
        }
        else
        {
            printf("b is the greatest");
        }
    }
    else
    {
        printf("abc");
    }
    return 0;
}