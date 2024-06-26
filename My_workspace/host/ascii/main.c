#include <stdio.h>

int main(void)
{
	char a, b, c, d, e, f;
	printf("Enter any 6 characters of your choice: ");
	fflush(stdout);
	scanf("%c %c %c %c %c %c", &a, &b, &c, &d, &e, &f);
	printf("ASCII Codes: %u %u %u %u %u %u\n", a, b, c, d, e, f);

	printf("Press enter key to exit the application \n");

	while(getchar() != '\n')
	{
		// just read the input buffer and do nothing
	}

	getchar();

	return 0;
}
