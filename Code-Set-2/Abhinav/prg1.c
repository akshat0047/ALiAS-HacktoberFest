#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,x=0,k,j;
    scanf("%d",&n);
    x=n;
    for (i = 1; i <= n; i++)//Printing the pattern
    {
        for ( k= 1; k < x; k++)
        {
            printf(" ");
        }
        x--;
        for (j=1;j<=i;j++)
        {
            printf("#");
        }
        printf("\n");
        
    }
    

}