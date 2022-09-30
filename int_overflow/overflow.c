#include <limits.h>
#include <stdio.h>

int main(){
	printf("Max values:\n\tINT_MAX:\t%i\n",INT_MAX);
	printf("\tLONG_MAX:\t%li\n\n",LONG_MAX);

	int a = 200;
	int b = 300;
	int c = 400;
	int d = 500;

	int result_int = a * b * c * d;
	long result_long = (long) a * (long) b * (long) c * (long) d; 

	printf("Results from calculating '200 * 300 * 400 * 500' in different datatypes:\n");
	printf(
		"\tint:\t\t%i\n\tlong\t\t%li\n\n",
		result_int, result_long
	);
}
