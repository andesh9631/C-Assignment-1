//4. WAP to find the area of the circle. Take radius of circle from user as input and print the 
//result in below given format.


#include<stdio.h>
int main()
{
   
    float  r , area,pi=3.14;
    printf("Enter the radius");
    scanf("%f",&r);
    area=3.14*r*r;
    printf("area of circle is %f having radius R is %f",area,r);
    return 0;
}
