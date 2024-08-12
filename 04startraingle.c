#include<stdio.h>
void main(){
    int n,m;
    printf("Enter the no. n and m:= ");
    scanf("%d",&n,&m);
    for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        printf("*");
    }
    printf("\n");}
}