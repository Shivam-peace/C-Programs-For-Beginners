#include<stdio.h>
int main(){
    int p,r,t,z;
    float SI;

    printf("Enter the principle amount : ");
    scanf("%d",&p);

    printf("Enter the rate of intrest per aunnum : ");
    scanf("%d",&r);

    printf("Enter the time period : ");
    scanf("%d",&t);

    SI=(p*r*t)/100.0;
    z=SI+p;
    printf("The simple intrest on the principle amount %d at the rate of intrest %d for the time period of %d is %.2f \n",p,r,t,SI);
    printf("The Total amount after adding the simple intrest is %d ",z);
    return 0;
}