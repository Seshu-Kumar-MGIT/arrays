
#include <stdio.h>
#define len 20
int main()
{
    int arr[len],size,l1,i;
    printf("Enter size of array:\n");
    scanf("%d",&size);
    printf("Enter elements into array:\n");
    for(i=0;i<size;i++)
    scanf("%d",&arr[i]);
    
    printf("Enter number of elements to be inserted into array:\n");
    scanf("%d",&l1);
    
    for(i=size;i<size+l1;i++)
    scanf("%d",&arr[i]);
    
    printf("elements in the array after insertion:\n");
    for(i=0;i<size+l1;i++)
    printf("%d\t",arr[i]);
    return 0;
}
