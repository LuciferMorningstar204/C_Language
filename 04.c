#include <stdio.h>

int main()
{
    int a = 10, b = 8;
    printf("Value Before Swap: %d %d\n", a,b); 
    a = a+b; 
    b = a-b; 
    a  = a-b;
    printf("Value After Swap: %d %d\n", a,b);  
    return 0;
}