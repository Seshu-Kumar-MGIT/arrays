#include<stdio.h> 

int main()    
{    
int num,rem,sum=0,num1;    
printf("enter the number=");    
scanf("%d",&num);    
num1=num;    
while(num>0)    
{    
rem=num%10;    
sum=(sum*10)+rem;    
num=num/10;    
}    
if(num1==sum)    
printf("palindrome number ");    
else    
printf("not palindrome");   
return 0;  
}   