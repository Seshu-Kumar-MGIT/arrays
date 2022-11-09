
#include <stdio.h>
#define len 20
int main()
{
    int arr[len],arr1[len],i,size,size1,temp;
    int arr2[len];
    int j=0,l=0;

    printf("Enter size of array1:\n");
    scanf("%d",&size);
    printf("Enter elements into array:\n");
    for(i=0;i<size;i++)
    {
    scanf("%d",&arr[i]);
    }
    
    printf("Enter size of array2:\n");
    scanf("%d",&size1);
    printf("Enter elements into array:\n");
    for(i=0;i<size1;i++)
    {
    scanf("%d",&arr1[i]);
    }
    
    for(i=0;i<size+size1;i++)
    {
        if(j<size)
        {
            arr2[j]=arr[i];
            j++;
        }
        for(int k=size;k<size+size1;k++)
        {
           if(l<size1)
           {
           arr2[k] =arr1[l];
           l++;
           }
        }
        }
       
      
      printf("Elements in the merged array:\n");
      for(i=0;i<size+size1;i++)
      {
        printf("%d\t",arr2[i]);
      }
}