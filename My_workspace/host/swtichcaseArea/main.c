#include <stdio.h>
#include <stdint.h>

void wait_for_user_input(void);

int main()
{
	int8_t code;
	float r, b, h, a;
	float area;

 	printf("Area calculation program\n");
 	fflush(stdout);
	printf("Circle --> c\n");
	fflush(stdout);
	fflush(stdout);
	printf("Trapezoid --> z\n");
	fflush(stdout);
	printf("Square --> s\n");
	fflush(stdout);
	printf("Rectangle --> r\n");
	fflush(stdout);
	printf("Enter the code here: ");
	fflush(stdout);

	scanf("%c",&code);

	switch(code)
	{
	case 'c':
		printf("Circle Area Calculation\n");
		fflush(stdout);
		printf("Enter radius(r) value: ");
		fflush(stdout);
		scanf("%f",&r);
		area = 3.1415 * r * r;
		break;
	case 't':
		printf("Triangle Area Calculation\n");
		fflush(stdout);
		printf("Enter base(b) value: ");
		fflush(stdout);
		scanf("%f",&b);
		printf("Enter height(h) value: ");
		fflush(stdout);
		scanf("%f",&h);
		area = (b*h)/2;
		break;
	case 'z':
		printf("Trapezoid Area Calculation\n");
		fflush(stdout);
		printf("Enter base1(a) value: ");
		fflush(stdout);
		scanf("%f",&a);
		printf("Enter base2(b) value: ");
		fflush(stdout);
		scanf("%f",&b);
		printf("Enter height(h) value: ");
		fflush(stdout);
		scanf("%f",&h);
		area = ((a+b)/2)*h;
		break;
	case 's':
		printf("Square Area Calculation\n");
		fflush(stdout);
		printf("Enter side (a) value: ");
		fflush(stdout);
		scanf("%f",&a);
		area = a * a;
		break;
	case 'r':
		printf("Rectangle Area Calculation\n");
		fflush(stdout);
		printf("Enter width (w) value: ");
		fflush(stdout);
		scanf("%f",&a);
		printf("Enter length (l) value: ");
		fflush(stdout);
		scanf("%f",&b);
		area = a * b;
		break;
	default:
		printf("Invalid input\n");
		fflush(stdout);

		area = -1;
	}

	if(!(area < 0))
	{
		printf("Area = %f\n",area);
		fflush(stdout);

	}

	wait_for_user_input();

	return 0;
}

void wait_for_user_input(void)
{
	printf("Press enter key to exit this application.\n");
	fflush(stdout);

	while(getchar() != '\n')
	{
		// just read the input buffer and do nothing
	}
	getchar();

}



