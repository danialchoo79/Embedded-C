#include <stdio.h>
#include <stdint.h>

int main(void)
{
	uint8_t const data = 10;

	printf("Value = %u\n",data);
	fflush(stdout);

	uint8_t *ptr = (uint8_t*)&data;

	*ptr = 50;

	printf("Value = %u\n",data);
	fflush(stdout);

	getchar();
}
