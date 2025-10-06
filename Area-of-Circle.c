#include<stdio.h>
#define pi 3.14
int main(){
     int r;
     float area;

     printf("Enter the radius of the circle : ");
     scanf("%d",&r);

     area=pi*r*r;
     printf("The area of the circle with radius %d is %.2f \n",r,area);
     return 0;
}