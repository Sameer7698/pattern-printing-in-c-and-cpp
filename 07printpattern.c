/*print given pattern 
  1
  12
  123
  1234*/
  #include<stdio.h>
  void main (){
    int n;
    printf("Enter the value of n:= ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for( int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
  }