#include<stdio.h>
void main(){
    int n;
    printf("Enter the value of:= ");
    scanf("%d",&n);
    printf("You will get star diamond of length = greatest odd integer no. of n\n");
    if(n%2!=0) n=n/2+1;
    else n=n/2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");

        }
        for(int k=1 ; k<=2*i-1;k++)
        { printf("*");

        }
        printf("\n");
    }
    int h=n-1;
    for(int m=1;m<=n-1;m++){
       for(int s=1;s<=m;s++){
        printf(" ");
       } 
       
       for(int f=1;f<=2*h-1;f++){
        printf("*");
       }
       h--;
       printf("\n");
    }

}