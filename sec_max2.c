#include<stdio.h> 
#define size 5


int main()    
{    
int arr[size];

printf("Enter the elements into array:\n" );

for(int i=0;i<size;i++)
scanf("%d",&arr[i]);

int max=arr[0];
    int sec_max=0;
    for(int i=1;i<size;i++)
    {
        if(max<arr[i])
        {
            sec_max=max;
            max=arr[i];
        }
        else if(arr[i]>sec_max && arr[i]<max)
            sec_max=arr[i];
    }
printf("sec_max=%d\n",sec_max);

return 0;
}