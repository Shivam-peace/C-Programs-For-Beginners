#include<stdio.h>
int main(){
    int a,b,c;

    printf("Enter the first number : ");
    scanf("%d",&a);

    printf("Enter the second number : ");
    scanf("%d",&b);

    printf("Enter the third number : ");
    scanf("%d",&c);

    if(a>b&&a>c){
        printf("The greatest among three is %d \n",a);
    }

    else if(b>a&&b>c){
        printf("The greatest among three is %d \n",b);
    }

    else if(c>a&&c>b){
        printf("The greatest among three is %d \n",c);
    }

    else{
        printf("The Numbers are equal \n");
    }
    return 0;
}