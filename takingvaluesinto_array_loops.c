#include<stdio.h> 
#define size 5
int main()    
{    
int a[size];


printf("Enter the elements into array:\n" );

for(int i=0;i<size;i++)
scanf("%d",&a[i]);


printf("The elements in the array are:\n");
for(int i=0;i<size;i++)
printf("%d\t",a[i]);


}