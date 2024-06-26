#include <stdio.h>
#include <stdint.h>

void wait_for_user_input(void);

int main(void)
{
	uint64_t income;
	uint64_t tax;

	double temp_income = 0;

	printf("Enter your total income: ");
	fflush(stdout);
	scanf("%lf",&temp_income);

	if(temp_income < 0)
	{
		printf("Income cannot be -ve\n");
		wait_for_user_input();
		return 0;
	}

	income = (uint64_t)temp_income;

	if(income <= 9525)
	{
		tax = 0;
	}

	else if((income > 9525) && (income <= 38700))
	{
		tax = income *0.12;
	}

	else if((income > 38700) && (income <= 82500))
	{
		tax = income *0.22;
	}

	else if(income > 82500)
	{
		tax = income *0.32;
		tax = tax + 1000;
	}

	printf("Tax payable : $%I64u\n",tax);
	fflush(stdout);

	wait_for_user_input();

	return 0;
}

void wait_for_user_input(void)
{
	while(getchar() != '\n')
	{
		// just read the input buffer and do nothing
	}
	getchar();
}



