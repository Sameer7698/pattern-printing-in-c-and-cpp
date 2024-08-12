#include<stdio.h>
void main(){
    int n;
    printf("Enter the value of n:= ");
    scanf("%d",&n);
    for(int i= 1 +64;i<=2*n-1+64;i++)
      { printf("%c",i);}
    printf("\n");
    
    for(int i=1;i<=n-1;i++){
        int a=65;
        for(int j=1+64;j<=n-i+64;j++){
            printf("%c",j);
            a++;

        }
        for(int j=1;j<=2*i-1;j++){
            printf(" ");
            a++;
        }
        for(int j=1;j<=n-i;j++){
            printf("%c",a);
            a++;
        }
        printf("\n");
    }
}