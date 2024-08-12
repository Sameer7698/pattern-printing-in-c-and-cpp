#include<stdio.h>
void main(){
   int rows,columns;
   printf("Enter rows and columns := ");
   scanf("%d , %d",&rows,&columns);
   for(int i=1;i<=rows;i++){// no. of lines/ rows --> i 
   for(int j=1;j<=columns;j++){// no. of columns --> j
    printf("%d",j);

   }
   printf("\n"); }
}