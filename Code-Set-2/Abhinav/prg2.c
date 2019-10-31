#include<stdio.h>
#include<conio.h>
void main()
{
    int arr1[3];
    int arr2[3];
    int i,a=0,b=0;
    printf("Enter the triplets of 1 \n");
    for ( i = 0; i < 3; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the triplets of 2 \n");
    for ( i = 0; i < 3; i++)
    {
        scanf("%d",&arr2[i]);
    }
    for ( i = 0; i < 3; i++)//Calculating the square.
    {
        if(arr1[i]>arr2[i])
        {
            a++;
        }
        else if (arr1[i]==arr2[i])
        {}
        else{
            b++;
        }        
        
    }
    printf("A = %d  B = %d", a,b);
}
