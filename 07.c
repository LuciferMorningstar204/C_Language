#include <stdio.h>

int main()
{
    int num; 
    printf("Enter A Number Of Month For Name Of Month: "); 
    scanf("%d", &num); 

    if (num<=0||num>=13)
    {
        printf("please enter a valid number!!!"); 
    }
    else{
    switch (num)
    {
    case 1:
        printf("the name of %dth month is january", num);
        break;
    case 2:
        printf("the name of %dth month is february", num);
        break;
    case 3:
        printf("the name of %dth month is march", num);
        break;
    case 4:
        printf("the name of %dth month is aprill", num);
        break;
    case 5:
        printf("the name of %dth month is may", num);
        break;
    case 6:
        printf("the name of %dth month is june", num);
        break;
    case 7:
        printf("the name of %dth month is july", num);
        break;
    case 8:
        printf("the name of %dth month is august", num);
        break;
    case 9:
        printf("the name of %dth month is september", num);
        break;
    case 10:
        printf("1the name of %dth month is october", num);
        break;
    case 11:
        printf("1the name of %dth month is november",num);
        break;
    case 12:
        printf("1the name of %dth month is december", num);
        break;
    
    }
    }
    return 0;
}