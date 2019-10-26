#include <stdio.h>
#include <conio.h>
void main()
{
    int a[5];
    int i,sum=0,x=0,c=1,temp=0,max=0,min=62000;
    printf("Enter the array: \n");
    for(i=0;i<5;i++)//Accepting the array
    {
        scanf("%d", &a[i]);
    }
    for (i=0;i<5;i++)//calculating the sums and comparing
    { 
        x=i;
        while (c<=4)
        {
            if (x>4)//handling an exception
           {
               x=0;
           }
           sum=sum+a[x];
           x++;
           c++;
        }
        c=1;
        if (sum>max)
        {
            max=sum;
        }
        if (sum<min)
        {
            min=sum;
        }
        sum=0;
        
    }
    printf("Minimum value = %d and Maximum value = %d",min,max);
}