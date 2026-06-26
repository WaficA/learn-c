/* 	Create a program to find the diffrences between three complex numbers.
	- Perform the subtraction between complex numbers by subtracting the
	   real part of one complex number from other complex numbers
	   and same for the imaginary part too.
*/
#include <stdio.h>

typedef struct complex{
	double r;
	double i;
} complex;


int main (void){

	complex one = {.r = 50.50, .i = 70};
	complex two = {.r = 30.30, .i = 35};

	complex substract;
	substract.r = one.r - two.r;
	substract.i = one.i - two.i;

	printf(" Results of sub.real: %.3lf\n Result of sub.imaginary: %.3lfi\n",substract.r ,substract.i);

	return 0;
}
