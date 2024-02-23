#include <stdio.h>
	int Add ();
	int Sub ();
	int Mul ();
	int Div ();
	int And ();
	int Or  ();
	int Not ();
	int Xor ();
	int Rem ();
	int Inc ();
	int Dec ();

	int main()
	{	
		int ID;
		
		printf("Enter the ID");
		scanf ("%d",&ID);
		
		switch(ID)
		{
			case 1:
			Add();
			break;
			
			case 2:
			Sub();
			break;
			
			case 3:
			Mul();
			break;
			
			case 4:
			Div();
			break;
			
			case 5:
			And();
			break;
			
			case 6:
			Or ();
			break;
			
			case 7:
			Not();
			break;
			
			case 8:
			Xor();
			break;
			
			case 9:
			Rem();
			break;
			
			case 10:
			Inc();
			break;
			
			case 11:
			Dec();
			break;
			
			default :
			printf("Wrong Choice\n");
			break;
			
		}
		
	}	

	


	int Add ()
	{	int Ruslt;
		int Number1,Number2;
		printf("Enter the Number1");
		scanf("%d",&Number1);
		
		printf("Enter the Number2");
		scanf("%d",&Number2);
		Ruslt=Number1+Number2;
		printf("Ruslt :%d\n",Ruslt);
	}
	
	int Sub ()
	{	int Ruslt;
		int Number1,Number2;
		printf("Enter the Number1");
		scanf("%d",&Number1);
		
		printf("Enter the Number2");
		scanf("%d",&Number2);
		
		Ruslt=Number1-Number2;
		printf("Ruslt :%d\n",Ruslt);
	}
	
	int Mul ()
	{	int Ruslt;
		int Number1,Number2;
		printf("Enter the Number1");
		scanf("%d",&Number1);
		
		printf("Enter the Number2");
		scanf("%d",&Number2);
		
		Ruslt=Number1*Number2;
		printf("Ruslt :%d\n",Ruslt);
		
	}
	
	int Div ()
	{	int Ruslt;
		int Number1,Number2;
		printf("Enter the Number1");
		scanf("%d",&Number1);
		
		printf("Enter the Number2");
		scanf("%d",&Number2);
		
		Ruslt=Number1/Number2;
		printf("Ruslt :%d\n",Ruslt);
	}
	
	int And ()
	{	int Ruslt;
		int Number1,Number2;
		printf("Enter the Number1");
		scanf("%d",&Number1);
		
		printf("Enter the Number2");
		scanf("%d",&Number2);
		
		Ruslt=Number1&Number2;
		printf("Ruslt :%d\n",Ruslt);
	}
	
	int Or ()
	{	int Ruslt;
		int Number1,Number2;
		printf("Enter the Number1");
		scanf("%d",&Number1);
		
		printf("Enter the Number2");
		scanf("%d",&Number2);
		
		Ruslt=Number1|Number2;
		printf("Ruslt :%d\n",Ruslt);
	}
	
	int Not ()
	{	int Ruslt;
		int Number1;
		printf("Enter the Number1");
		scanf("%d",&Number1);
		
		Ruslt= ~Number1;
		printf("Ruslt :%d\n",Ruslt);
	
	}
	
	
	int Xor ()
	{	int Ruslt;
		int Number1,Number2;
		printf("Enter the Number1");
		scanf("%d",&Number1);
		
		printf("Enter the Number2");
		scanf("%d",&Number2);
		
		Ruslt=Number1^Number2;
		printf("Ruslt :%d\n",Ruslt);
	}
	
	int Rem ()
	{	int Ruslt;
		int Number1,Number2;
		printf("Enter the Number1");
		scanf("%d",&Number1);
		
		printf("Enter the Number2");
		scanf("%d",&Number2);
		
		Ruslt=Number1%Number2;
		printf("Ruslt :%d\n",Ruslt);
	}
	
	
	int Inc ()
	{	int Ruslt;
		int Number1;
		printf("Enter the Number1");
		scanf("%d",&Number1);
	
	
		Ruslt= ++ Number1;
		printf("Ruslt :%d\n",Ruslt);
	}
	
	
	int Dec ()
	{	int Ruslt;
		int Number1;
		printf("Enter the Number1");
		scanf("%d",&Number1);
	
	
		Ruslt= -- Number1;
		printf("Ruslt :%d\n",Ruslt);
	}
	
	