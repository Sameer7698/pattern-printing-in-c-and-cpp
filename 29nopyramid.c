#include<stdio.h>
void main(){
    int n;
    printf("Enter the value of n:= ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d",k);
        }
        int a=i-1;
        for(int j=1;j<=i-1;j++){
            printf("%d",a);
            a--;
        }
        printf("\n");
    }
}