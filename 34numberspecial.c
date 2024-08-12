#include<stdio.h>
void main(){
    int n;
    printf("Enter the number n:= ");
    scanf("%d",&n);
   for(int i=1;i<=2*n-1;i++){
    printf("%d",i);
   }
   printf("\n");
   for(int i=1;i<=n-1;i++){
     int k=1;
    for(int j=1;j<=n-i;j++){
        printf("%d",j);
        k++;
    }
    
    
    for(int m=1;m<=2*i-1;m++){
        printf(" ");
        k++;
    }
   
    for(int j=1;j<=n-i;j++){
        printf("%d",k);
        k++;
    }
    
     printf("\n");
   }
   
   }
