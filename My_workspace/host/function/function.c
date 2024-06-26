#include <stdio.h>

void function_add_numbers(int a, int b, int c);

int main()
{
	function_add_numbers(12,13,14);
	function_add_numbers(-20,20,14);

	int valueA = 90, valueB = 70;

	function_add_numbers(valueA,valueB,90);

	return 0;
}

// Main function with command line arguments
// Usually not used in Embedded Systems
//int main(int argc, char* argv[])
//{
//
//}

void function_add_numbers(int a, int b, int c)
{
	int sum;
	sum = a + b + c;
	printf("Sum = %d\n",sum);
}
