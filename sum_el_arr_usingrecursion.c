#include<stdio.h> 
#define size 5

int sum_arr(int a[],const int len);

int main()    
{    
int a[size];

printf("Enter the elements into array:\n" );

for(int i=0;i<size;i++)
scanf("%d",&a[i]);


printf("The Sum elements in the array:\n");
printf("%d",sum_arr(a,size));

return 0;
}

int sum_arr(int a[],const int len)
{
if (len <= 0)
    {
        return 0;
    }

return (sum_arr(a,len-1)+a[len-1]);
}
