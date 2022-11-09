#include <stdio.h>

#define size 5
 
int main()
{
    int a[size],i,no_neg=0;
    
    printf("Enter elements into array: \n");
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
     
    for(i=0;i<=size-1;i++)
    {
        if(a[i]<0)
        no_neg++;
    }
 
    printf("\nNo of negative numbers:%d",no_neg++);
   
    
}