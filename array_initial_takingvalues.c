#include<stdio.h> 
#define size 5
int main()    
{    
int a[size];
int b[]={10,25};

printf("Enter the elements into array:\n" );
scanf("%d",&a[0]);
scanf("%d",&a[1]);
scanf("%d",&a[2]);
scanf("%d",&a[3]);
scanf("%d",&a[4]);

printf("The elements in the array are:\n");
printf("%d\t",a[0]);
printf("%d\t",a[1]);
printf("%d\t",a[2]);
printf("%d\t",a[3]);
printf("%d\t",a[4]);

}