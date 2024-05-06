#include<stdio.h>
void main(){
    int n;
    int a[100];
    int temp;
    printf("enter the size of array \n");

    scanf("%d",&n);
    printf("enter the elements \n");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("the array before swaping the adjacent terms is \n");
    for(int i=0;i<n;i++){
    printf("%d ",a[i]);
    }
    for(int i=0;i<n;i=i+2){
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
printf("\n");
    printf("the array after swaping the adjacent terms is \n");
    for(int i=0;i<n;i++){
    printf("%d ",a[i]);
    }
}