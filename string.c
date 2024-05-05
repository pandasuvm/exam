/* ascii code of string and checking its sum is palindrome or not */
#include<stdio.h>
void main(){
    char c[1000];
    int a[1000];
    int i=0,n=0,rev=0,sum=0,rem=0;
    printf("enter the string \n ");
    gets(c);
    while(c[i]!='\0'){
     a[i]=c[i];  
     i++;
     n++;
    }
    
    printf("the ascii code of the letters are\n");
    for(int i=0;i<n;i++){
        printf("%c is %d  ",c[i],a[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    printf("the sum of the ascii values is %d \n",sum);
    int org=sum;
    
    while(sum!=0){
        rem=sum%10;
        rev=rev*10+rem;
        sum=sum/10;
    }
    if(rev==org){
        printf("yes it is a palindrome \n");

    }
    else
    printf("no its not a palindrome\n");
}
