#include <stdio.h>
#include <stdint.h>

int main()
{
	int32_t num1 = 0, num2 = 0;

	printf("Enter first number(integer): ");
	fflush(stdout);
	scanf("%d",&num1);

	printf("Enter second number(integer): ");
	fflush(stdout);
	scanf("%d",&num2);

	if(num1<num2)
	{
		printf("%d is smaller\n",num1);
		fflush(stdout);
	}

	else if(num1>num2)
	{
		printf("%d is bigger\n",num1);
		fflush(stdout);
	}

	else
	{
		printf("Numbers are equal\n");
	}

	printf("Press enter key to exit this application.\n");
	fflush(stdout);

	while(getchar() != '\n')
	{
		// just read the input buffer and do nothing
	}
	getchar();

	return 0;
}


