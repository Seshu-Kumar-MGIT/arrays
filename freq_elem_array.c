#include<stdio.h> 
#define size 5


int main()    
{    
int a[size]={2,3,4,3,2},temp,count,j;


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

for(int i=0;i<size;i=j)
{
    temp=a[i];
    count=1;
    for( j=i+1;j<size;j++)
    {
        if(temp!=a[j])
        break;
        else
        count++;
    }
    printf("The element %d is occurring %d times\n",temp,count);
}
}