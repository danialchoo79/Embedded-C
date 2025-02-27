#include <stdio.h>
#include <stdint.h>

int main(void)
{
	uint8_t studentsAge[100];
	uint8_t someData[10] = {0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff};

	printf("Size of array = %u\n",sizeof(studentsAge));
	printf("Base address of the array = %p\n",studentsAge);

	printf("Before 2nd data item = %x\n",*(someData+1));

	*(someData+1) = 0x9;

	printf("After 2nd data item = %x\n",*(someData+1));

	printf("0th element value = %x\n",someData[0]);

	for(uint32_t i = 0; i<10; i++)
	{
		printf("%x\t",someData[i]);
	}

	return 0;
}
