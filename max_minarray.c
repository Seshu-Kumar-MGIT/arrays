#include<stdio.h> 
#define size 5


int main()    
{    
int a[size],max=a[0],min=a[0];

printf("Enter the elements into array:\n" );

for(int i=0;i<size;i++)
scanf("%d",&a[i]);

for(int i=0;i<size;i++)
{
    if(a[i]>max)
    max=a[i];
    
}

for(int i=0;i<size;i++)
{
    if(a[i]<min)
    min=a[i];
    
}

printf("\nThe maximum number in an array:%d",max);
printf("\nThe minimum number in an array:%d",min);

return 0;
}
