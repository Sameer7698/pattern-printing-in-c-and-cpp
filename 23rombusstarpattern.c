#include<stdio.h>
void main(){
    int n;
    printf("Enter the value of n:= ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int p=1;p<=i;p++){
            printf("*");

        }
        for(int k=1;k<=n-i;k++){
            printf("*");
        }
        for(int l=1;l<=i-1;l++){
            printf(" ");
        }
        printf("\n");
    }

}