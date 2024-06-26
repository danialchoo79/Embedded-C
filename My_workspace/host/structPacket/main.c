#include <stdint.h>
#include <stdio.h>

struct Packet
{
	uint8_t crc;
	uint8_t status;
	uint16_t payload;
	uint8_t bat;
	uint8_t sensor;
	uint8_t longAddr;
	uint8_t shortAddr;
	uint8_t addrMode;
};

int main(void)
{
	uint32_t packetValue;
	printf("Enter the 32 bit packet value: ");
	fflush(stdout);
	scanf("%X",&packetValue);

	struct Packet packet;

	packet.crc 			= (uint8_t)(packetValue & 0x3); // Last 2 Bits
	packet.status 		= (uint8_t)(packetValue >> 2 & 0x1);
	packet.payload 		= (uint16_t)(packetValue >> 3 & 0xFFF);
	packet.bat 			= (uint8_t)(packetValue >> 15 & 0x7);
	packet.sensor 		= (uint8_t)(packetValue >> 18 & 0x7);
	packet.longAddr 	= (uint8_t)(packetValue >> 21 & 0xFF);
	packet.shortAddr 	= (uint8_t)(packetValue >> 29 & 0x3);
	packet.addrMode 	= (uint8_t)(packetValue >> 31 & 0x1);


	printf("crc			: %#x\n",packet.crc);
	fflush(stdout);
	printf("status		: %#x\n",packet.status);
	fflush(stdout);
	printf("payload		: %#x\n",packet.payload);
	fflush(stdout);
	printf("bat			: %#x\n",packet.bat);
	fflush(stdout);
	printf("sensor		: %#x\n",packet.sensor);
	fflush(stdout);
	printf("longAddr	: %#x\n",packet.longAddr);
	fflush(stdout);
	printf("shortAddr	: %#x\n",packet.shortAddr);
	fflush(stdout);
	printf("addrMode	: %#x\n",packet.addrMode);
	fflush(stdout);

	printf("Size of struct is %zu\n",(unsigned int)sizeof(packet));
	fflush(stdout);

	while(getchar() != '\n');
	getchar();

	return 0;

}
