int main()
{
	while(1)
	{
		int choice;
		printf("---Calculator---\n");
		printf("1.ADDITION\n2. SUBTRACTION\n3. MULTIPLICATION\n 4. DIVISION\n Enter your choice\n");
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
		}
	}

}
