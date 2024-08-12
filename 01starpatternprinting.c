#include<stdio.h>
void main(){
    int n,m;   //*************......upto n no. of stars
    printf("Enter the value of n := ");
    scanf("%d",&n);
    printf("Enter the value of m := ");
    scanf("%d",&m);
    for(int j=1;j<=m;j++)//outer loop-> no of lines
    {
     for(int i=1;i<=n;i++)// inner loop-> no of stars in each line
     {
        printf("*");
     }
      printf("\n");//har line ke baad ek enter marne ke liye hai
      }
}