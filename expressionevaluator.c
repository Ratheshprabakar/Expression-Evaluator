#include<stdio.h>
void input();
void addition();
void subtraction();
void multiplication();
void division();
void balancing_symbols();
int checkexpression(char temp1, char temp2);
int *input_array;
char stack[100];
int size,i,top=-1,validity,flag=0,temp;
int result=0,value=1,x,c=1;
int main()
{
	int choice;
	char exp[100];
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
			case 5:
			{
				printf("\nEXPRESSION MODE ON\n");
				balancing_symbols();
				//(x==1)?printf("Valid\n"):printf("Not valid\n");	
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
void balancing_symbols()
{
	char exp[100];
	printf("Enter your expression\t");
	scanf("%s",exp);
	for(i=0;exp[i]!='\0';i++)
	{
		if(exp[i]=='{' || exp[i]=='[' || exp[i]=='(')
		{
			flag=1;
			top++;
			stack[top]=exp[i];	
		}	
		else if(exp[i]=='}' || exp[i]==')' || exp[i]==']')
		{
			flag=1;
			temp=top;
			top--;
			validity=checkexpression(exp[temp],exp[i]);
			if(validity==1)
			{
				continue;
			}
			else
			{
				printf("Please, Enter the valid expression !");
				exit(1);
			}
		}
		else
			c=0;
		
	}
	if(flag==1)
	{
		if(top==-1)
		{
			printf("Valid");
			//function call to evaluation		
		}
		else
			printf("Please, Enter the valid expression !");
			exit(1);
	}
	else if(c==0 && top==-1)
	{
		printf("Valid");
		//function call to evaluation
	}
}
int checkexpression(char temp1, char temp2)
{
	if(temp1=='(' && temp2==')')
		return 1;
	else if(temp1=='[' && temp2==']')
		return 1;
	else if(temp1 =='{' && temp2=='}')
		return 1;
	else
		return 0;
}
