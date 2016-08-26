#include<stdio.h>
#include<conio.h>
int main()
{
	int x,sum=1,c,t;
	clrscr();
	printf("Enter the X :\n");
	scanf(%d",&x);
	i=0;c=x;
	while(x>0)
	{
		t=x%10;
		x=x/10;
		s=s*t;
	}
	c=c*s;
	
	printf("The total seeds are : %d",c);
	return 0;
}