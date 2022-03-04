#include <stdio.h>

int main()
{
    int a; 
    printf("enter the value: "); 
    scanf("%d", &a); 
    if (a<0)
    {
        printf("%d is a negative number", a); 
    }

    else if(a==0){
        printf("%d is a number is Zero", a); 
    }

    else{
        printf("%d is a positive number", a); 
    }
    
    return 0;
}