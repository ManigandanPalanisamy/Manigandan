#include <stdio.h>
#include<conio.h>
int number_of_coin(long int total)
   {
    if(total<3)
	     return total;
	if(total<5 && total>=3)
	   return number_of_coin(total%3)+total/3;
    if(total>=5)
	 return number_of_coin(total%5)+total/5;


	      
	     
	
	 }
int main(void) {
	
	long int total;
	clrscr();
	scanf("%d",&total);
	
	printf("%d",number_of_coin(total));
	
	return 0;
}