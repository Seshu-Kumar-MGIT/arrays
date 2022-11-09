
#include <stdio.h>
#define len 20
int main()
{
    int arr[len],freq[len],i,size,temp,count;
    int count_dupp=0;
    printf("Enter size of array:\n");
    scanf("%d",&size);
    printf("Enter elements into array:\n");
    for(i=0;i<size;i++)
    {
    scanf("%d",&arr[i]);
    freq[i]=-1;
    }
    
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
        }
        }
      for(i=0; i<size; i++)
      {
        if(freq[i] == 0)
        {
            count_dupp++;
        }
      }  
      
      printf("no. of dupplicate elements in the array:%d",count_dupp);
}