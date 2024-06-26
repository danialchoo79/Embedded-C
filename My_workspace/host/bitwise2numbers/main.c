#include <stdio.h>
#include <stdint.h>

void wait_for_user_input(void);

int main(void)
{
	int32_t num1, num2;

	printf("Enter 2 numbers (give space between 2 numbers): ");
	fflush(stdout);
	scanf("%d %d",&num1, &num2);

	printf("Bitwise AND(&) : %d\n",(num1 & num2));
	fflush(stdout);
	printf("Bitwise OR(|) : %d\n",(num1 | num2));
	fflush(stdout);
	printf("Bitwise XOR(^) : %d\n",(num1 ^ num2));
	fflush(stdout);
	printf("Bitwise NOT(~) : %d\n",(~num1));
	fflush(stdout);

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



