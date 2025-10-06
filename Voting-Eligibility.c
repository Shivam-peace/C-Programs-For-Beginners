#include<stdio.h>
int main(){
    int x;

    printf("Enter the age to verify voting eligibility : ");
    scanf("%d",&x);

    if(x>=18){
        printf("The person is eligible for voting \n");
    }
    else{
        printf("The person is not eligible for voting \n");
    }
    return 0;
    
}