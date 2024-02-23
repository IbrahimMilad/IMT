#include<stdio.h>
void main()
{
	int id,pass,cntr=0;
	printf("Please Enter Your id:\n");
	scanf("%d",&id);
	if(id==1234)
	{
		printf("Please Enter Your Password\n");
		do
		{
			scanf("%d",&pass);
			if(pass==7788)
			{
			printf("Welcome Ahmed\n");
			cntr=0;
			}
        	else
        	{
				if (cntr<2)
				{
					printf("Please try again\n");
				}
				cntr++;
        	}
		}
		while((cntr>0)&&(cntr<3));
		if(cntr==3)
		{
			printf("sorry You Can't write Password Again\n");
		}	
		
	}
	else if (id==5678)
	{
		printf("Please Enter Your Password\n");
        do
        {
        	scanf("%d",&pass);
        	if(pass==5566)
        	{
        	printf("Welcome Youssef\n");
        	cntr=0;
        	}
        	else
        	{
				if (cntr<2)
				{
					printf("Please try again\n");
				}
				cntr++;
        	}
        }
        while((cntr>0)&&(cntr<3));
        if(cntr==3)
        {
        	printf("sorry You Can't write Password Again\n");
        }
	}
	else if (id==9870)
	{
		printf("Please Enter Your Password\n");
        do
        {
        	scanf("%d",&pass);
        	if(pass==1122)
        	{
        	printf("Welcome Michael\n");
        	cntr=0;
        	}
        	else
        	{
				if (cntr<2)
				{
					printf("Please try again\n");
				}
				cntr++;
        	}
        }
        while((cntr>0)&&(cntr<3));
        if(cntr==3)
        {
        	printf("sorry You Can't write Password Again\n");
        }
	}
	else
	{
		printf("Wrong ID \n ");
	}
}























	