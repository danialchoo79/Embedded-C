#include <stdio.h>

int main()
{
	char name[30];

	printf("Enter your full name: ");
	fflush(stdout);
	scanf("%[^\n]s",name);
	printf("Your name is: %s\n",name);
	fflush(stdout);

	return 0;
}
