#include<stdio.h>
void main(){
    int n;
    printf("Enter the last Alfabet number upto to which you have to print:= ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=i;j++){
            char d=(char)(a+64);
            printf("%c",d);
            a++;
        }
        printf("\n");
    }
}