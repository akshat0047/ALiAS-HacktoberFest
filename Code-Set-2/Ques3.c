#include<stdio.h>
int main(){
    int i,j;
    int n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
       printf("\n");
       for(j=i;j<n-1;j++){printf(" ");

       }   
       for(j=0;j<=i;j++){
           printf("#");
       }
     
}
return 0;
}
