#include <stdio.h>

int main(void)
{
	char msg1[] = "Hello how are you?";

	printf("Message is: %s\n",msg1);
	fflush(stdout);

	printf("Address of 'msg1' variable = %p\n",&msg1);
	fflush(stdout);
	printf("Value of 'msg1' variable = %p\n",msg1);
	fflush(stdout);

	for(;;);
}
