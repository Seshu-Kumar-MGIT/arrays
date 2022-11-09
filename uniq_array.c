
#include <stdio.h>
#define len 20
int main()
{
    int arr[len],freq[len],i,size,temp,count;
    printf("Enter size of array:\n");
    scanf("%d",&size);
    printf("Enter elements into array:\n");
    for(i=0;i<size;i++)
    {
    scanf("%d",&arr[i]);
    freq[i]=-1;
    }
    
    printf("Unique elements in the array:\n");
    for(i=0;i<size;i++)
    {
        count=1;
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]==arr[i])
            {
              freq[j]=0;
              count++;
            }
            if(freq[i] != 0)
            {
            freq[i] = count;
            }
        }
        }
      for(i=0; i<size; i++)
      {
        if(freq[i] == 1)
        {
            printf("%d ", arr[i]);
        }
      }  
}