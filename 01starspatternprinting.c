#include<stdio.h>
void main(){
    int n,m;
    printf("Enter the value of n,m := ");
    scanf("%d,%d",&n,&m);
    int j=1;
    while(j<=m){
    int i=1;
    while(i<=n){
        printf("*");
        i++;}
        printf("\n");
        j++;
    }
}