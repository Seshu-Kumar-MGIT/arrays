#include<stdio.h> 
#define size 5


int main()    
{    
int a[size],temp;

printf("Enter the elements into array:\n" );

for(int i=0;i<size;i++)
scanf("%d",&a[i]);


for(int i=0;i<size;i++)
{
  for(int j=i+1;j<size;j++){
    if(a[i]>a[j])
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
  }
    
}

printf("sorted array:\n");
for(int i=0;i<size;i++)
{
   printf("%d\t",a[i]);
}

printf("\nThe Second largest element is:%d\t",a[size-2]);
return 0;
}