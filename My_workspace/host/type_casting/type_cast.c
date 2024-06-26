#include <stdio.h>

int main(void)
{
	// Compiler does integer promotion (4 bytes) even though it needs only 1/2 byte(s) of memory. (Implicit Casting)
	unsigned char data = (unsigned char)(0x87 + 0xFF00); // Explicit Casting to Unsigned Char

	float result = (float)80/3; // integer 3 will have implicit casting and promoted to float

	printf("Data: %u result : %f\n",data,result);

	return 0;
}
