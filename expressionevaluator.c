#include<stdio.h>
void input();
void addition();
void subtraction();
void multiplication();
void division();
int *input_array;
int size,i;
int result=0,value=1;
int main()
{
	int choice;
	while(1)
	{	
		printf("\n---Calculator---\n");
		printf("1. ADDITION\n2. SUBTRACTION\n3. MULTIPLICATION\n4. DIVISION\n5. EXPRESSSION MODE\n6. EXIT\nEnter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
				addition();
				break;		
			}	
			case 2:
			{
				subtraction();
				break;
			}
			case 3:
			{
				multiplication();
				break;	
			}
			case 4:
			{
				division();
				break;	
			}
			case 6:
			{
				exit(1);	
			}
			default:
			{
				printf("Enter the valid Choice\n");
				break;
			}
		}
	}

}
void input()
{
	printf("Enter Number of Operands\t");
	scanf("%d",&size);
	if(size==1)
	{
		printf("Can't perform operation with 1 Operand\n");
		exit(1);
	}
	else
	{
		input_array=(int *)malloc(size*sizeof(int));
		printf("Enter the %d operands\n",size);
		for(i=0;i<size;i++)
		{
			scanf("%d",&input_array[i]);		
		}
	}
		
}
void addition()
{
	input();
	for(i=0;i<size;i++)
	{
		result+=input_array[i];
	}
	free(input_array);	
	printf("\n\n|The result of addition of %d numbers are %d|\n",size,result);
}
void subtraction()
{
	input();
	result=input_array[0];
	for(i=1;i<size;i++)
	{
		result-=input_array[i];	
	}
	free(input_array);
	printf("\n\n | The result of Subtraction of %d numbers are %d|\n",size,result);
}
void multiplication()
{
	input();
	for(i=0;i<size;i++)
	{
		value*=input_array[i];
	}
	free(input_array);	
	printf("\n\n|The result of multiplication of %d numbers are %d|\n",size,value);
}
void division()
{
	input();
	value=input_array[0];
	for(i=1;i<size;i++)
	{
		value/=input_array[i];	
	}
	free(input_array);
	printf("\n\n | The result of division of %d numbers are %d|\n",size,value);
}
