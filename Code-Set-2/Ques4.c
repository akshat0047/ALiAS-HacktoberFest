#include<stdio.h>
int main()
{
int ar[3],ar1[3],i,a=0,b=0;
for(i=0;i<3;i++)
{
    scanf("%d",&ar[i]);
}
for(i=0;i<3;i++)
{
    scanf("%d",&ar1[i]);
}
for(i=0;i<3;i++)
{
    if(ar[i]<ar1[i])
        b+=1;
    else if(ar[i]>ar1[i])
        a+=1;
}
printf("%d %d",a,b);
return 0;
}
