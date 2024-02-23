#include <stdio.h>
int main ()
{
	int Number1,Number2,sum,diff,and,or,Xor;

	printf("number1:");
	scanf("%d",&Number1);
	
	printf("number2:");
	scanf("%d",&Number2);
	
	sum = Number1 + Number2 ;
	
	diff = Number1 - Number2;
	
	and = Number1 & Number2;
	
	or = Number1 | Number2;
	
	Xor = Number1 ^ Number2;

	printf("sum = %d \n",sum);
	
	printf("diff = %d \n",diff);
	
	printf("and = %d \n",and);
	
	printf("or = %d \n",or);
	
	printf("Xor = %d \n",Xor);
	
	
	
	
	return 0 ;
	
	
	
	
	
	
}