#include<stdio.h>
void main(){
    int n;
    printf("Enter the value of n:= ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            printf("*");
        }
        if(i>1){for(int k=1;k<=2*(i-1)-1;k++){
            printf(" ");}}
            
           if(i==1) { for(int m=1;m<=n-1;m++){
                printf("*");
            }
        }
        else if(i>1) {for(int t=1;t<=n+1-i;t++){
            printf("*"); }
    }
    
    
    printf("\n");
}}