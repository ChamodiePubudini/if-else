#include<stdio.h>
int main ()

{
int i,odd=0,even=0,x=1;//declaring variables
for(i=1;i<=10;i++)

{
printf("Enter Number : ");
scanf("%d",&x);

if(x%2==0)
    even++;
else
    odd++; //end if

}

printf("Total Number of even is %d \n",even);
printf("Total Number of odd is %d \n",odd);
    
    return 0;

}
