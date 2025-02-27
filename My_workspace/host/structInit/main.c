#include <stdint.h>
#include <stdio.h>

struct carModel
{
	uint32_t carNumber;
	uint32_t carPrice;
	uint16_t carMaxSpeed;
	float carWeight;
};

int main(void)
{
	struct carModel carBMW = {2021,15000,220,1330};
	struct carModel carFord = {4031,35000,1900,96};
	struct carBMW carHonda = {.carWeight = 90.90,.carPrice = 15000};

	printf("Details of car BMW is as follows\n");
	printf("carNumber = %u",carBMW.carNumber);
	printf("carPrice = %u",carBMW.carPrice);
	printf("carMaxSpeed = %u",carBMW.carMaxSpeed);
	printf("carWeight = %u",carBMW.carWeight);

	carFord.carNumber = 1000;
	printf("Details of car Ford is as follows\n");
	printf("carNumber = %u",carFord.carNumber);
	printf("carPrice = %u",carFord.carPrice);
	printf("carMaxSpeed = %u",carFord.carMaxSpeed);
	printf("carWeight = %u",carFord.carWeight);


	return 0;
}
