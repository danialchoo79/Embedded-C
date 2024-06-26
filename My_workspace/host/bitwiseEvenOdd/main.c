#include <stdio.h>
#include <stdint.h>

void wait_for_user_input(void);

int main(void)
{
	int32_t num1;

	printf("Enter a number: ");
	fflush(stdout);
	scanf("%d",&num1);

	if(num1 & 1)
	{
		printf("%d is odd number\n",num1);
		fflush(stdout);
	}

	else
	{
		printf("%d is even number\n",num1);
		fflush(stdout);
	}

	wait_for_user_input();

	return 0;
}

void wait_for_user_input(void)
{
	printf("Press enter key to exit this application.\n");
	fflush(stdout);

	while(getchar() != '\n')
	{
		// just read the input buffer and do nothing
	}
	getchar();

}



