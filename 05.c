#include <stdio.h>
int recatangle(int length, int breadth){
    return length*breadth; 
}

int square(int length)
{
    return length*length; 
}

int circle(int length)
{
    return 3.14*length*length; 
}

int main()
{
    int option;
    int length, breadth; 
    int result; 
    printf("Press 1 To Find Area of Rectangle\nPress 2 To Find Area Of Square\nPress 3 TO Find Area Of Circle\n"); 
    scanf("%d", &option); 
    // printf("You Selected %d Option\n", option); 


    switch (option)
    {
    case 1:
        printf("You Selected Option 1 To  Find Area of Rectangle\n"); 


        printf("Enter The Length Of Rectangle: "); 
        scanf("%d", &length); 
        printf("Enter The Length Of breadth: "); 
        scanf("%d", &breadth); 

        result = recatangle(length, breadth); 
        printf("%d", result); 
        break;
    
    case 2:
        printf("You Selected Option 2 To  Find Area of Square\n"); 

        printf("\nEnter the Length of Side : ");
        scanf("%d", &length);
 

        result = square(length); 
        printf("%d", result); 
        break;
    
    case 3:
        printf("You Selected Option 3 To  Find Area of Circle\n"); 

        
        printf("\nEnter the radius of Circle : ");
        scanf("%d", &length);

        result = circle(length); 
        printf("%d", result); 
        break;
    }


    return 0;
}