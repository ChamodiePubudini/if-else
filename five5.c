#include<stdio.h>
#include<stdlib.h>
int main ()

{
int odd=0,even=0,x=1;//declaring variables
for(int i=1;i<=10;i++)

{
printf("Enter Number : ");//get user inputs
scanf("%d",&x);

if(x%2==0){
    even++;
}
else{
    odd++;
}//end if

}

printf("Total Number of even is %d \n",even);
printf("Total Number of odd is %d \n",odd);
    
    return 0;

}
