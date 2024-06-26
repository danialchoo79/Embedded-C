#include <stdio.h>

long long int g_data = 0xFFFEABCD11112345;

int main()
{
	short *pAddress = (short*)&g_data;

	printf("value of pAddress %p\n",pAddress);
	printf("Value of address %p is %x\n",pAddress,*pAddress);

	pAddress = pAddress + 1;

	printf("value of pAddress %p\n",pAddress);
	printf("Value of address %p is %x\n",pAddress,*pAddress);

	return 0;
}
