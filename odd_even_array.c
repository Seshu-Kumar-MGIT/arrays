#include <stdio.h>

#define size 5
 
int main()
{
    int a[size],i,count=0,count1=0;
    
    printf("Enter elements into array: \n");
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
     
    for(i=0;i<=size-1;i++)
    {
        if(a[i]%2==0)
        count1++;
        else if(a[i]%2!=0)
        count++;
    }
 
    printf("\nNo of odd numbers:%d",count);
    printf("\nNo of even numbers:%d",count1);
    
}