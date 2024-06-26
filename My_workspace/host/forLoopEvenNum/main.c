#include <stdio.h>
#include <stdint.h>

void wait_for_user_input(void);

int main(void)
{
	int32_t start_num, end_num;
	uint32_t even;

	printf("Enter starting and ending numbers (give space between 2 nos): ");
	fflush(stdout);
	scanf("%d %d",&start_num,&end_num);

	even = 0;

	if(end_num < start_num)
	{
		// error
		printf("Ending number should be > starting number\n");
		fflush(stdout);
		wait_for_user_input();
		return 0;
	}

	printf("Even numbers are: \n");

	for( ; start_num <= end_num ; start_num++)
	{
		if(!(start_num % 2)) // Check for Even Numbers
		{
			printf("%d\t",start_num);
			even++;
		}



	}



	printf("\nTotal even numbers: %u\n", even);
	fflush(stdout);

	wait_for_user_input();

	return 0;
}

void wait_for_user_input(void)
{
	while(getchar() != '\n')
	{
		// just read the input buffer and do nothing
	}
	getchar();
}



