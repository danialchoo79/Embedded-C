#include <stdio.h>
#include <stdint.h>

void wait_for_user_input(void);

int main(void)
{
	uint8_t num=1;

	while(num<=10)
	{
		printf("%d\n",num);
		fflush(stdout);
		num++;
	}

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



