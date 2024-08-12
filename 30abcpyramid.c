#include<stdio.h>
void main(){
    int n;
    printf("Enter the value of n:= ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1+64;k<=i+64;k++){
            printf("%c",k);
        }
        int a=i-1+64;
        char ch=(char)(a);
        for(int m=1;m<=i-1;m++){
            printf("%c",ch);
            ch--;
        }
        printf("\n"); 

    }
}