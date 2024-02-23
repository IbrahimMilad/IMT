#include <stdio.h>
int main ()
{
	int Number1,Number2,Number3;
	
	printf("Enter Number1 :");
	scanf("%d",&Number1);
	
	printf("Enter Number2 :");
	scanf("%d",&Number2);
	
	printf("Enter Number3 :");
	scanf("%d",&Number3);
	
	if((Number1 > Number2)&&(Number1 > Number3))
	{
		printf("Maximum Number is:%d",Number1);
	}
	else if(Number2 > Number3) 
	{
		printf("Maximum Number is:%d",Number2);

	}
	else 
	{
		printf("Maximum Number is:%d",Number3);
	}
	
	return 0 ;
}