#include <stdio.h>

#define size 5
 
 int mini(int a[],int len,int index)
 {
     static int min=0;
        if(index<len)
       {
           if(a[min]>a[index])
            {
                  min=index;
                  mini(a,len,++index);
                  
        }
           else
           mini(a,len,++index);
       }
       
        return min;
     
 }
 int maxi(int a[],int len,int index)
 {
            static int max=0;
        if(index<len)
       {
           if(a[max]<a[index])
            {
                  max=index;
                  maxi(a,len,++index);
                  
        }
        else
           maxi(a,len,++index);
       }
       
        return max;
     
 }
int main()
{
    int a[size],i;
    
    printf("Enter elements into array: \n");
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
     
 
     printf("minimum of array is : %d",a[(mini(a,size,1))]);
 
     printf("\nmaximum of array is : %d",a[(maxi(a,size,1))]);
 
 
    
}