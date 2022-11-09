
#include <stdio.h>
#define len 10
int main()
{
    int arr[len],dupp[len],size,l1,i;
    printf("Enter size of array:\n");
    scanf("%d",&size);
    printf("Enter elements into array:\n");
    for(i=0;i<size;i++)
    scanf("%d",&arr[i]);
    l1=size;
    for(i=0;i<l1;i++)
    dupp[i]=arr[i];
    
    printf("elements in the dupplicate array:\n");
    for(i=0;i<size;i++)
    printf("%d\t",dupp[i]);
    return 0;
}
