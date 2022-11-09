
#include <stdio.h>
#define len 20
int main()
{
    int arr[len],arr1[len],size,n,i;
    printf("Enter size of array:\n");
    scanf("%d",&size);
    printf("Enter elements into array:\n");
    for(i=0;i<size;i++)
    scanf("%d",&arr[i]);
    
    printf("Enter the position at which element to be deleted:\n");
    scanf("%d",&n);
    
    if(n<0 || n>size)
    printf("Invalid position! Please enter position between 1 to %d", size);
    
    else
    {
    for(i=n-1; i<size-1; i++)
        {
            arr[i] = arr[i + 1];
        }
    }
    printf("elements in the array after deletion:\n");
    for(i=0;i<size-1;i++)
    printf("%d\t",arr[i]);
    return 0;
}
