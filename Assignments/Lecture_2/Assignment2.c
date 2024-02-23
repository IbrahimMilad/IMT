#include <stdio.h>
int main ()
{
	int ID ,Passward;

	printf("Enter your ID");
	scanf("%d",&ID);

	if(ID == 1234)
	{
		printf("Enter his passward:\n");
		scanf("%d",&Passward);
	
		if(Passward == 1247)
		{
			printf("ibrahim:\n");
		}
	
		else 
		{
			printf("Incorrect Password:\n");
		}	
		
		
		
	}
	else 
	{
		printf("Incorrect ID");
	}
	
}
	
