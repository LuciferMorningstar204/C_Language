#include <stdio.h>

int main()
{

    const int months[13] =  {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int first, second,firstdate, firstmonth, seconddate, secondmonth; 

    printf("Enter The First Date And Month:\n"); 
    dateone:
    scanf("%d", &first); 
    

    firstdate = first/100;
    firstmonth = first%100;

    if (firstdate>31||firstmonth<1)
    {
        printf("Please Enter Valid Date\n");
        goto dateone;
    }
    printf("First Date = %d\nFirst Month = %d\n", firstdate, firstmonth);
    
    printf("Enter The Second Date And Month:\n"); 
    scanf("%d", &second); 
    datesecond:
    seconddate = second/100;
    secondmonth = second%100;

    if (firstdate>31||firstmonth<1)
    {
        printf("Please Enter Valid Date\n");
        goto datesecond;
    }
    

    printf("Second Date = %d\nSecond Month = %d\n", seconddate, secondmonth); 

    int days, month; 
    month = secondmonth - firstmonth; 
    days = seconddate - firstdate; 
    printf("The Difference Between Given Two Dates Is %d Days And %d Months", month,days); 
    return 0;
}



