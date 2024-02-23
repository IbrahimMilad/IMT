#include <stdio.h>
int get_maxmum (int Number1 ,int Number2,int Number3,int Number4);
int get_minmum (int Number1 ,int Number2,int Number3,int Number4);


int main()
{
	int Number1,Number2,Number3,Number4;
	printf("Enter Number1\n");
	scanf("%d",&Number1);
	
	printf("Enter Number2\n");
	scanf("%d",&Number2);
	
	printf("Enter Number3\n");
	scanf("%d",&Number3);
	
	printf("Enter Number4\n");
	scanf("%d",&Number4);
	
	get_maxmum(Number1,Number2,Number3,Number4);
	get_minmum(Number1,Number2,Number3,Number4);
}

int get_maxmum (int Number1 ,int Number2,int Number3,int Number4)
{
	if(Number1 > Number2 && Number1>Number3 && Number1>Number4)
	{
		printf("Number1 is Maxmum\n");
	}
	else if (Number2>Number3 && Number2>Number4)
	{
		printf("Number2 is Maxmum\n");
	}
	else if (Number3>Number4)
	{
		printf("Number3 is Maxmum\n");
	}
	else 
	{
		printf("Number4 is Maxmum\n");
	}
}

int get_minmum (int Number1 ,int Number2,int Number3,int Number4)
{
	if(Number1 < Number2 && Number1<Number3 && Number1<Number4)
	{
		printf("Number1 is Minmum\n");
	}
	else if (Number2<Number3 && Number2<Number4)
	{
		printf("Number2 is Minmum\n");
	}
	else if (Number3<Number4)
	{
		printf("Number3 is Minmum\n");
	}
	else 
	{
		printf("Number4 is Minmum\n");
	}
}