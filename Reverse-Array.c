#include<stdio.h>
int main(){
    int n,x;
    printf("Enter the number of element you want in array : ");
    scanf("%d",&n);
    x=n-1;

    int i,arr[n];
    for(i=0;i<n;i++){
        printf("Enter the element for arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }

    i=0;
    while(i<n/2){
        int a,b;
        a=arr[i];
        b=arr[x];
        arr[i]=b;
        arr[x]=a;
        i++;
        x--;

    }

    for(i=0;i<n;i++){
        printf("The value for arr[%d] is %d...\n",i,arr[i]);
    }
    return 0;
}