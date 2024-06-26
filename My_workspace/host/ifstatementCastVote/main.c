#include <stdio.h>
#include <stdint.h>

int main()
{
	int age = 0;

	printf("Enter your age here: ");
	fflush(stdout);
	scanf("%d",&age);

	if(age<18)
	{
		printf("Sorry! you are not eligible to vote\n");
		fflush(stdout);
	}

	if(age>=18)
	{
		printf("Congrats! You are eligible to vote\n");
		fflush(stdout);
	}

	printf("Press enter key to exit this application.");
	fflush(stdout);

	while(getchar() != '\n')
	{
		// just read the input buffer and do nothing
	}
	getchar();

	return 0;
}


