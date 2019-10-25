#include<stdio.h>
int main(){
    int ar[100];int n,sum,max;
    int min=1000000;
    int i,j,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++){sum=0;
        for(j=i;count<4;j++){
            if(j>n-1){ j=j%n-1;continue;}
            else{sum+=ar[j];count++;}
        }
        count=0;
        if(sum>max && sum<min){
            max=min=sum;
        }
        else if(sum>max){
            max=sum;
        }
        else if(sum<min){
            min=sum;
        }
        
         
    }
    printf("%d  %d\n",max,min);
    return 0;
    

}
