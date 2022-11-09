#include<stdio.h> 
#define size 5
int main()    
{    
int a[size],sum=0;

printf("Enter the elements into array:\n" );

for(int i=0;i<size;i++)
scanf("%d",&a[i]);

for(int i=0;i<size;i++)
sum=sum+a[i];

printf("The Sum elements in the array:\n");
printf("%d",sum);


}