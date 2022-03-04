#include <stdio.h>
int cube(float value1)
{
    return value1*value1*value1; 
}

int sphere(float value1)
{
    float pie = 3.14; 
    return (4.0/3.0)*pie*(value1*value1*value1);
}

int cylinder(float value1, float value2)
{
    float pie = 3.14;
    return pie*(value1*value1)*value2;
}

int main()
{
    float value1, value2, result;
    int selectors; 
    printf("press 1 to find the volume of cube\npress 2 to find the volume of sphere\npress 3 to find the volume of cylinder\n"); 
    scanf("%d", &selectors); 

    if (selectors==1)
    {
        float side,area;
	    printf("enter side of cube: ");
	    scanf("%f",&side);
	
   
	    area=side*side*side;
	    printf("VOC: %f\n",area);
    }
    else if (selectors==2)
    {
        int r;
        float volume_sphere;
        printf("Enter Radius : ");
        scanf("%d",&r);
        volume_sphere = (4/3.0)*3.14*r*r*r;
        printf("\nVolume of Sphere = %f",volume_sphere);
    }
    else if(selectors==3)
    {
        float vol,r,h;
	    printf("enter radius: ");
	    scanf("%f",&r);
	    printf("enter height: ");
	    scanf("%f",&h);
    
	    vol=(22*r*r*h)/7;
	    printf("VOC: %f\n",vol);
    }
    return 0;
}