#include<stdio.h>
int main(){
    int arr[100][100];
    int r,c,i,j,sum1=0,sum2=0;
    printf("Enter the order of square matrix\n");
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(i==j){
                sum1+=arr[i][j];
                
            
            }
        }
        }
        for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(i+j==2){
                sum2+=arr[i][j];
            }
        }
        }    
        
        printf("sum1=%d sum2=%d\n",sum1,sum2);
        printf("|sum1-sum2|=%d\n",sum1-sum2);
        return 0;
}

    
        
