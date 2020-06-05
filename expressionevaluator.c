#include<stdio.h>
void addition();
void multiplication();
int size,i,temp;
int result=0,value=1;
int main()
{
	int choice;
	while(1)
	{	
		printf("\n---Calculator---\n");
		printf("1.ADDITION\n2. SUBTRACTION\n3. MULTIPLICATION\n4. DIVISION\nEnter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
				addition();
				break;		
			}	
			/*case 2:
			{
				subtraction();
				break;
			}*/
			case 3:
			{
				multiplication();
				break;	
			}/*
			case 4:
			{
				division();
				break;	
			}*/
			default:
			{
				printf("Enter the valid Choice\n");
				break;
			}
		}
	}

}
void addition()
{
	printf("Enter Number of Operands to add\t");
	scanf("%d",&size);
	printf("Enter the %d operands\n",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&temp);
		result+=temp;
	}	
	printf("\n\n|The result of addition of %d numbers are %d|\n",size,result);
}
void multiplication()
{
	printf("Enter Number of Operands to subtract\t");
	scanf("%d",&size);
	printf("Enter the %d operands\n",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&temp);
		value*=temp;
	}	
	printf("\n\n|The result of Mulitiplication of %d numbers are %d|\n",size,value);
}
