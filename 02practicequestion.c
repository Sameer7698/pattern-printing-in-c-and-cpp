#include<stdio.h>
void main(){ int rows;
    printf("Enter the no. of rows := ");
    scanf("%d",&rows);
    int column;
     printf("Enter the no. of columns := ");
    scanf("%d",&column);
    for(int j=1;j<=rows;j++){
    for(int i=1;i<=column;i++){
        printf("*");

    }
    printf("\n");}
}